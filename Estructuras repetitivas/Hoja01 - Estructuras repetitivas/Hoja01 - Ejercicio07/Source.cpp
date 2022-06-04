#include<iostream>
using namespace std;

void main() {

	int num, EF, EP, TF;
	float promedio;

	cout << "Ingrese el numero de alumnos: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{	
		do {
			cout << "\nIngrese el EF del alumno: " << i << ": ";
			cin >> EF;
			cout << "Ingrese el EP del alumno: " << i << ": ";
			cin >> EP;
			cout << "Ingrese el TF del alumno: " << i << ": ";
			cin >> TF;

			promedio = (EF * 0.55) + (EP * 0.30) + (TF * 0.15);

			cout << "Su promedio final es: " << promedio << endl;
		} while (((EF || EP || TF) > 20) || (promedio > 20));
	}
}
