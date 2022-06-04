#include<iostream>
using namespace std;

void main() {

	int A, B, C;

	cout << "Ingrese los lados de un triangulo: ";
	cin >> A >> B >> C;

	if (A < (B + C) && (A > abs(B - C))) {
		cout << "Si es un triangulo" << endl;
	}
	else {
		cout << "NO es un triangulo" << endl;
	}
}
