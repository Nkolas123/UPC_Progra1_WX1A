#include<iostream>
using namespace std;

float exponencial(int valor) {

	int resultado = 1;

	for (int i = 1; i <= valor; i++)
	{
		resultado = pow(i, i + 1);
	}
	return resultado;
}

float factorial(int valor) {

	int	resultado = 1;

	for (int i = 1; i <= valor; i++)
	{
		resultado *= i;
	}
	return resultado;
}

void main() {

	int n;

	cout << "Ingrese el numero de terminos de la sucesion: ";
	cin >> n;

	float suma = 0;

	for (int i = 1; i <= n; i++)
	{
		suma = suma + (exponencial(i)) / (factorial(i));
	}

	cout << "\nLa suma de los " << n << " primeros terminos es: " << suma << endl;
}