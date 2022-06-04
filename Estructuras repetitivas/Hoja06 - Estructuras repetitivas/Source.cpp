#include<iostream>
#include<math.h>
using namespace std;

double n, a, b;

float positivo_negativo(int valor) {

	float resultado = 0;

	for (int i = 1; i <= valor; i++)
	{
		resultado = pow((-1), i + 1);
	}

	return resultado;
}

float factorial(int valor) {

	float resultado = 1;

	for (int i = 1; i <= valor; i++)
	{
		resultado = resultado * i;
	}

	return resultado;
}

float numerador(int valor) {

	float resultado = 0;

	for (int i = 1; i <= valor; i++)
	{
		resultado = pow(a, i) * pow(b, i + 1);
	}

	return resultado;
}

void main() {

	cout << "Ingrese el valor de a: ";
	cin >> a;
	cout << "Ingrese el valor de b: ";
	cin >> b;
	cout << "Ingrese el valor de n: ";
	cin >> n;

	double valor;
	double suma = 0;

	for (int i = 1; i <= n; i++)
	{
		valor = positivo_negativo(i) * ((numerador(i)) / ((a - b) * factorial(i)));
		suma = suma + valor;
	}

	cout << "\nEl valor de la sumatoria es: " << suma << endl;
}