#include<iostream>
#include<cmath>
using namespace std;

void main() {

	float edad;
	char sexo;

	cout << "Ingrese el sexo de la persona (F o M): ";
	cin >> sexo;
	cout << "Ingrese la edad de la persona: ";
	cin >> edad;

	double pulsaciones;

	if (sexo == 'F') {
		pulsaciones = (220 - edad) / 10;
	}
	else if (sexo == 'M') {
		pulsaciones = (210 - edad) / 10;
	}

	cout << "\nEl numero de pulsaciones es: " << pulsaciones << endl;
	cout << "El numero debe ser de " << round(pulsaciones) << " pulsaciones por cada 10 segundos aprox" << endl;

}
