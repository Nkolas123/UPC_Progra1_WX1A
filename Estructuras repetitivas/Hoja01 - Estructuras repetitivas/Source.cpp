#include<iostream>
using namespace std;

void main() {
	/*
	
	int num;
	
	cout << "Ingrese el numero: "; cin >> num;

	int suma = 0;
	int i = 1;
	while (i <= num) {
		suma += i;
		i++;
	}

	cout << "\nLa suma de los 10 primeros numeros positivos es: " << suma << endl;

	*/

	/*
	
	int num;

	cout << "Ingrese el numero: "; cin >> num;

	int suma = 0;
	int i = 1;

	do {
		suma += i;
		i++;
	} while (i <= num);

	cout << "\nLa suma de los 10 primeros numeros positivos es: " << suma << endl;
	
	*/

	int num;
	
	cout << "Ingrese el numero: "; cin >> num;

	int suma = 0;
	for (int i = 1; i <= num; i++)
	{
		suma += i;
	}

	cout << "\nLa suma de los 10 primeros numeros positivos es: " << suma << endl;

}