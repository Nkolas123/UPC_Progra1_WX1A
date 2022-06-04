#include<iostream>
using namespace std;

void main() {

	int num;
	do {
		cout << "Ingrese un numero: ";
		cin >> num;
	} while (num >= 10);

	cout << endl;

	for (int i = 1; i <= num; i++)	// Si (i > num) se rompe el ciclo
	{
		for (int k = i; k <= num - 1; k++)		// k = espacios en blanco
		{
			cout << " ";
		}
		for (int j = 1; j <= (2 * i) - 1; j++)	// Si no entra hace salto de linea 
		{
			cout << j;
		}
		cout << endl;		// Pasa a la siguiente linea;
	}

	for (int i = num - 1; i >= 1; i--)
	{
		for (int k = i; k <= num - 1; k++)
		{
			cout << " ";
		}
		for (int j = 1; j <= (2 * i) - 1; j++)
		{
			cout << j;
		}
		cout << endl;
	}

}