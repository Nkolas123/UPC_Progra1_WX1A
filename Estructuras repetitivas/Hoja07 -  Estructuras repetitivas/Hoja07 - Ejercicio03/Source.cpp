#include<iostream>
using namespace std;

void main() {

	int alumnos, rpta1, rpta2, rpta3;
	int cant_rpta1 = 0, cant_rpta2 = 0, cant_rpta3 = 0, rpta3_mal = 0, todo_bien = 0;
	int cant_rpta_buenas = 0, aprobados = 0, contador = 0, cant_rindieron = 0;
	float porc_perfecto = 0;

	do {
		cout << "Ingrese el numero de alumnos: ";
		cin >> alumnos;
	} while (alumnos > 40);

	for (int i = 1; i <= alumnos; i++)
	{
		contador++;

		cout << "\nPara el alumno " << i << endl;
		
		cout << "Respuesta para la pregunta 1: ";
		cin >> rpta1;
		cout << "Respuesta para la pregunta 2: ";
		cin >> rpta2;
		cout << "Respuesta para la pregunta 3: ";
		cin >> rpta3;


		if (rpta1 == 3) {
			cant_rpta1++;
		}
		if (rpta2 == 1) {
			cant_rpta2++;
		}
		if (rpta3 == 4) {
			cant_rpta3++;
		}


		if (rpta1 == 3 && rpta2 == 1 && rpta3 == 4) {
			todo_bien++;
		}
		if (rpta3 != 4) {
			rpta3_mal++;
		}

		porc_perfecto = todo_bien * (100.0 / alumnos);

		cant_rpta_buenas = cant_rpta1 + cant_rpta2 + cant_rpta3;


		cant_rpta_buenas >= 2 && rpta2 == 1 ? aprobados++ : 0;
	}

	cant_rindieron = 40 - contador;


	cout << "\nEl porcentaje de alumnos que hizo bien las tres preguntas: " << porc_perfecto << endl;
	cout << "Cantidad de alumnos aprobados: " << aprobados<< endl;
	cout << "Cantidad de alumnos que hizo mal la pregunta 3: " << rpta3_mal << endl;
	cout << "Cantidad de alumnos que no rindieron el examen: " << cant_rindieron << endl;
}