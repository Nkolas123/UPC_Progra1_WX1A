#include<iostream>
using namespace std;

float signo(int valor) {

	int resultado = 0;

	for (int i = 1; i <= valor; i++)
	{
		resultado = pow(-1, i + 1);
	}
	return resultado;
}


void main() {

	int n, x, terminos;

	cout << "El numero de terminos de la sucesion: ";
	cin >> terminos;
	cout << "\nIngrese el valor de n: ";
	cin >> n;
	cout << "Ingrese el valor de x: ";
	cin >> x;

	float suma = 0;

	for (int i = 1; i <= terminos; i++)
	{
		suma = suma + (signo(i)) * (i / (pow(x, n - (i - 1))));
	}

	cout << "\nLa suma de los " << n << " primeros terminos es: " << suma << endl;
}