#include<iostream>
#include<math.h>
using namespace std;

void main() {

	int num, contador = 0;
	float fraccion, suma = 0;

	cout << "Ingrese el valor de la sumatoria: ";
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		fraccion = 1 / (pow(2, i));
		contador = contador + 1;

		if (contador % 2 != 0) {		// Segun la posicion de las fracciones
			suma = suma + fraccion;	
		}
		if (contador % 2 == 0) {		// Segun la posicion de las fracciones (Ejm: -1/2 == 2)
			suma = suma - fraccion;
		}
	}
	cout << "\nLa suma es: " << suma << endl;
}