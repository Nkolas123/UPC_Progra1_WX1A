#include<iostream>
#include<math.h>
using namespace std;

void main() {

	int num;
	float fraccion, suma = 0;

	cout << "Ingrese el valor de la sumatoria: ";
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		fraccion = 1 / (pow(2, i));
		suma = suma + fraccion;
	}

	cout << "La suma es: " << suma << endl;
}