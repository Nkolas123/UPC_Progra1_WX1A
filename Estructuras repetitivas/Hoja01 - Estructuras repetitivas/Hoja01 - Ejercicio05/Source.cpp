#include<iostream>
using namespace std;

void main() {

	int num_pares, num_impares;

	cout << "Ingrese la cantidad de numeros pares a sumar: "; 
	cin >> num_pares;

	cout << "Ingrese la cantidad de numeros impares a sumar: ";
	cin >> num_impares;

	int pares = 0;
	int impares = 1;
	int suma_pares = 0;
	int suma_impares = 0;

	for (int i = 1; i <= num_pares; i++)
	{
		pares += 2;
		suma_pares += pares;
	}

	cout << "Sumatoria de pares: " << suma_pares << endl;

	for (int i = 1; i <= num_impares; i++)
	{
			suma_impares += impares;
			impares += 2;
	}

	cout << "Sumatoria de impares: " << suma_impares << endl;
	
}
