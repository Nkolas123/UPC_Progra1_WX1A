#include<iostream>
using namespace std;

void main() {

	int tarjetas, edad, jovenes_viudas = 0;
	int num_hombres = 0, num_mujeres = 0, hombres_soltero_divorciado = 0;
	float porc_hombres = 0 , porc_mujeres = 0, total_personas = 0;
	char sexo;
	char estado_civil;

	cout << "\n**** CENSO 2018 - DISTRITO DE SAN JUAN DE LURIGANCHO ****" << endl;
	cout << "\nIngrese el numero de personas encuestadas: ";
	cin >> tarjetas;
	
	for (int i = 1; i <= tarjetas; i++)
	{
		cout << "\nInformacion de la tarjeta " << i << ": " << endl;
		cout << "Sexo (F o M): ";
		cin >> sexo;
		cout << "Edad: ";
		cin >> edad;
		cout << "Estado civil (a: Soltero; b: Casado; c: Viudo; d: Divorciado): ";
		cin >> estado_civil;

		total_personas = total_personas + 1;

		if (estado_civil == 'c' && sexo == 'F') {
			if (edad >= 16 && edad <= 21) {
				jovenes_viudas = jovenes_viudas + 1;
			}
		}
		if (sexo == 'M') {
			num_hombres = num_hombres + 1;
		}
		if (sexo == 'F') {
			num_mujeres = num_mujeres + 1;
		}
		if ((estado_civil == 'a' || estado_civil == 'd') && sexo == 'M') {
			if (edad > 30) {
				hombres_soltero_divorciado = hombres_soltero_divorciado + 1;
			}
		}

		porc_hombres = num_hombres * (100 / total_personas);
		porc_mujeres = num_mujeres * (100 / total_personas);

	}

	cout << "\nEl numero de jovenes viudas entre 16 y 21 años inclusive es: " << jovenes_viudas << endl;
	cout << "El porcentaje de hombres en el distrito es: " << porc_hombres << "%" << endl;
	cout << "El porcentaje de mujeres en el distrito es: " << porc_mujeres << "%" << endl;
	cout << "El numero de hombres mayores de 30 años solteros o divorciados es: " << hombres_soltero_divorciado << endl;

}
