#include<iostream>
using namespace std;

void main() {

	int num;

	cout << "Ingrese un numero entero: "; cin >> num;

	if ((num % 2 == 0) && (num != 0)) {
		cout << "El numero es par";
	}
	else if (num % 2 != 0) {
		cout << "El numero es impar";
	}
	else {
		cout << "El numero es 0";
	}

}
