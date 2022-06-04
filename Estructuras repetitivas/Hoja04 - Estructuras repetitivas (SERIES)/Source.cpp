#include<iostream>
#include<math.h>
using namespace std;

float factorial(int valor) {
	int resultado = 1;

	for (int i = 1; i <= valor; i++)
	{
		resultado = i * i;
	}

	return resultado;
}


void main() {
	int k;
	float a, suma = 0;

	do {
		cout << "Ingrese el valor de k: ";
		cin >> k;
		cout << "Ingrese el valor de a: ";
		cin >> a;

		for (int i = 0; i <= k; i++)
		{
			suma = suma + pow(a, i) / factorial(i);
		}
	} while (k > 20);

	cout << "\nEl resultado de e^a sera: " << suma;
}