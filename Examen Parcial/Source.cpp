#include<iostream>
using namespace std;

int n;
float a;

float factorial(int valor) {

	int resultado = 1;

	for (int i = 1; i <= valor; i++)
	{
		resultado = resultado * (a + i);
	}

	return resultado;
}

float denominador(int valor) {

	int resultado = 0;

	for (int i = 1; i <= valor; i++)
	{
		resultado = resultado + (i * 2);
	}

	return resultado;
}

void main() {

	do {
		cout << "Cantidad de terminos: ";
		cin >> n;
	} while (n < 0 || n >= 21);

	do {
		cout << "Ingrese el valor de a: ";
		cin >> a;
	} while (!(a >= 1 && a <= 4));

	double suma = 0;

	for (int i = 1; i <= n; i++)
	{
		suma += (pow(-1, i + 1)) * ((a * factorial(i)) / denominador(i));
	}

	cout << "\nLa suma de terminos es: " << suma << endl;
}