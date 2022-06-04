#include<iostream>
#include<math.h>
using namespace std;

int exponencial(int valor) {

	float resultado = 0;

	for (int i = 1; i <= valor; i++)
	{
		resultado = pow((-1), i + 1);
	}

	return resultado;
}

int impares(int valor) {

	float resultado = 0;

	for (int i = 1; i <= valor; i++)
	{
		resultado = ((2 * i) - 1);
	}

	return resultado;
}

int pares(int valor) {

	float resultado = 0;

	for (int i = 1; i <= valor; i++)
	{
		resultado = pow(2, i - 1);
	}

	return resultado;
}

void main() {

	int N;
	float a;
	do {
		cout << "Digite el numero de terminos: ";
		cin >> N;
		cout << "Digite el valor de a: ";
		cin >> a;
	} while (!((N > 0 && N < 21) && (a >= 0.5 && a <= 2)));

	float suma = 0;
	float sumatoria = 0;

	for (float i = 1; i <= N; i++)
	{
		suma = exponencial(i) * ((impares(i)) * (pow(a, pares(i))) / (2.0 * i));
		sumatoria = sumatoria + suma;
	}

	cout << "\nEl resultado de la serie sera: " << sumatoria;

}