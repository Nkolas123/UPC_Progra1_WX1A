// Resolver sinn usar funciones matematicas: pow, sqrt, abs, ect..
#include<iostream>
using namespace std;

float factorial(int valor) {

	int resultado = 1;
	for (int i = 1; i <= valor; i++)
	{
		resultado *= i;
	}

	return resultado;
}

void main() {

	int num;

	cout << "Ingrese un numero positivo: ";
	cin >> num;

	float suma = 0;
	int contador = 0;

	/* USANDO POW:

	float resultado = 0;

	for (int i = 1; i <= num; i++)
	{
		suma = pow(-1, i + 1) * (i / factorial(i));
		resultado = resultado + suma;
	}

	cout << "\nLa suma de los " << num << " primeros terminos es: " << resultado << endl;
	*/

	for (int i = 1; i <= num; i++)
	{
		contador++;

		if (contador % 2 != 0) {
			suma = suma + (i / factorial(i));
		}
		else {
			suma = suma - (i / factorial(i));
		}

	}

	cout << "\nLa suma de los " << num << " primeros terminos es: " << suma << endl;
}