#include<iostream>
using namespace std;

int numerador(int valor) {

	int resultado = 0;

	for (int i = 1; i <= valor; i++)
	{
		resultado = 2 * i;
	}

	return resultado;
}

int denominador(int valor) {

	int resultado = 0;

	for (int i = 1; i <= valor; i++)
	{
		resultado = (2 * i) - 1;
	}


	resultado = 0;
}

void main() {

	int n;

	cout << "Ingrese el valor de N: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		
	}

}