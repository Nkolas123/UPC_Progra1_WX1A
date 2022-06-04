#include<iostream>
using namespace std;

int n;
float a, b;

float numerador(int valor) {

	float resultado = 0;
	
	for (int i = 1; i <= valor; i++)
	{
		resultado = pow(a, i * b);
	}
	return resultado;
}

float denominador(int valor) {

	float resultado = 0;

	for (int i = 1; i <= valor; i++)
	{
		resultado = pow(2, i);
	}

	return resultado;
}

void main() {
	
	do {
		cout << "Ingrese el valor de N: ";
		cin >> n;
	} while (n <= 0);

	cout << "Ingrese el valor de a: ";
	cin >> a;
	cout << "Ingrese el valor de b: ";
	cin >> b;
	
	float suma = 0;

	for (int i = 1; i <= n; i++)
	{
		suma += (numerador(i)) / (denominador(i));
	}

	cout << "\nResultado: " << suma << endl;

}