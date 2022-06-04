#include<iostream>
#include<math.h>
using namespace std;

void main() {

	int num;
	float fraccion, suma = 0;

	cout << "Ingrese el valor de la sumatoria: ";
	cin >> num;

	for (float i = 1; i < num; i ++)
	{
		fraccion = (2 * i) / ((2 * i) - 1) ;
		suma = suma + fraccion;
	}

	cout << "La suma es: " << suma + 1 << endl;
}