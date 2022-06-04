#include<iostream>
using namespace std;

int n;
double a, x, y;

double positivo_negativo(int valor) {

	double resultado = 0;

	for (int i = 1; i <= valor; i++)
	{
		resultado = pow((-1), i);
	}
	return resultado;
}

double denominador(int valor) {

	double resultado = 0;

	for (int i = 1; i <= valor; i++)
	{
			resultado = (pow(2, i - 1)) * pow(a, i - 1);
	}

	return resultado;
}

void main() {

	cout << "Ingrese el numero de terminos (N): ";
	cin >> n;
	cout << "Ingrese el valor de a: ";
	cin >> a;
	cout << "Ingrese el valor de x: ";
	cin >> x;
	cout << "Ingrese el valor de y: ";
	cin >> y;

	double suma = 0, suma2 = 0;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0) {
			suma = suma + (positivo_negativo(i) * (i * 3 * x)) / (denominador(i));
		}
		else {
			suma2 = suma2 + (positivo_negativo(i) * (i * 3 * y)) / (denominador(i));
		}
	}

	cout << "\nEl valor de la sumatoria es: " << double(suma + suma2) << endl;

}