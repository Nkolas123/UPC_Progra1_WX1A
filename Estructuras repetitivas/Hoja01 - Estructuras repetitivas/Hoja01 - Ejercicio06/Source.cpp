#include<iostream>
using namespace std;

void main() {

	int n;

	cout << "Ingrese el numero n: ";
	cin >> n;

	int impares = 1;
	int suma = 0;

	for (int i = 1; i < n; i++)
	{
		suma += impares;
		impares += 2;
	}

	cout << "El cuadrado del valor ingresado es: " << suma;
}