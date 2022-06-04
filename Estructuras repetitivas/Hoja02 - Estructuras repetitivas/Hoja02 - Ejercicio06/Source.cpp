#include<iostream>
using namespace std;

void main() {

	int edad;
	float peso, peso_cat1 = 0, peso_cat2 = 0, peso_cat3 = 0, peso_cat4 = 0;
	float promedio_cat1, promedio_cat2, promedio_cat3, promedio_cat4;
	int cant_cat1 = 0, cant_cat2 = 0, cant_cat3 = 0, cant_cat4 = 0;
	string categoria;

	for (int i = 1; i <= 10; i++)
	{
		cout << "\nIngrese la edad de la " << i << " persona: ";
		cin >> edad;
		cout << "Ingrese su peso: ";
		cin >> peso;

		if (edad >= 0 && edad <= 12) {
			categoria = "Niños";
			cout << "Pertenece a la categoria: " << categoria << endl;
			cant_cat1++;
		}
		else if (edad >= 13 && edad <= 29) {
			categoria = "Jovenes";
			cout << "Pertenece a la categoria: " << categoria << endl;
			cant_cat2++;
		}
		else if (edad >= 30 && edad <= 59) {
			categoria = "Adultos";
			cout << "Pertenece a la categoria: " << categoria << endl;
			cant_cat3++;
		}
		else if (edad >= 60) {
			categoria = "Viejos";
			cout << "Pertenece a la categoria: " << categoria << endl;
			cant_cat4++;
		}
		else {
			cout << "La persona no existe: " << endl;
		}

		categoria == "Niños" ? peso_cat1 = peso_cat1 + peso : 0;
		categoria == "Jovenes" ? peso_cat2 = peso_cat2 + peso : 0;
		categoria == "Adultos" ? peso_cat3 = peso_cat3 + peso : 0;
		categoria == "Viejos" ? peso_cat4 = peso_cat4 + peso : 0;

		promedio_cat1 = peso_cat1 / cant_cat1;
		promedio_cat2 = peso_cat2 / cant_cat2;
		promedio_cat3 = peso_cat3 / cant_cat3;
		promedio_cat4 = peso_cat4 / cant_cat4;

	}
	
	cout << "\nEl promedio de peso de la categoria 1 es: " << promedio_cat1 << endl; 
	cout << "\nEl promedio de peso de la categoria 2 es: " << promedio_cat2 << endl;
	cout << "\nEl promedio de peso de la categoria 3 es: " << promedio_cat3 << endl;
	cout << "\nEl promedio de peso de la categoria 4 es: " << promedio_cat4 << endl;

}