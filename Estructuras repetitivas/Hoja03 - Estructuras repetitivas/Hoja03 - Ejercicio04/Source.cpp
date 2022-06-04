#include<iostream>
using namespace std;

float factorial(int valor) {

	int resultado = 1;

	for (int i = 1; i <= valor; i++)
	{
		resultado = resultado * i;
	}
	return resultado;
}


void main() {

	int num;

	cout << "Ingrese la cantidad de terminos: ";
	cin >> num;

	float suma = 0;

	for (int i = 1; i <= num; i++)
	{
		suma = suma + (i / factorial(i));
	}

	cout << "La suma de los " << num << " primeros terminos es: " << suma << endl;
}