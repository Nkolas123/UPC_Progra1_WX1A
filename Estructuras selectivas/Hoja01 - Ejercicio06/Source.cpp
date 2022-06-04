#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

void main() {

	int A, B, C, x;
	float raiz1, raiz2;

	cout << "Ingrese el valor de A: ";
	cin >> A;
	cout << "Ingrese el valor de B: ";
	cin >> B;
	cout << "Ingrese el valor de C: ";
	cin >> C;
	cout << "Ingrese un valor para evaluar: ";
	cin >> x;

	int disc = pow(B, 2) - (4 * (A * C));
	int ecuacion = A * (pow(x, 2)) + (B * 10) + C;

	if (disc > 0) {
		raiz1 = (-B + sqrt(disc)) / (2 * A);
		raiz2 = (-B - sqrt(disc)) / (2 * A);
		cout << "\nRaiz 1: " << setprecision(2) << raiz1 << endl;
		cout << "Raiz 2: " << setprecision(3) << raiz2 << endl;
	}
	else if (disc == 0) {
		raiz1 = (-B + sqrt(disc)) / (2 * A);
		cout << "\nLa unica raiz es: " << setprecision(2) << raiz1 << endl;
	}
	else {
		cout << "\nNo tiene raices" << endl;
	}

	cout << "\nEl total reemplazando los valores en la ecuacion (Ax^2 + Bx + C) es: " << ecuacion << endl;
}
