#include<iostream>
using namespace std;

int factorial(int valor) {

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

	int suma = 0;

	for (int i = 1; i <= num; i++)
	{
		suma = suma + factorial(i);
	}

	cout << "\nLa suma de los " << num << " primeros terminos es: " << suma << endl;

}