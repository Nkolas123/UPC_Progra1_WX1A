#include<iostream>
using namespace std;

void main() {

	int edad;

	cout << "Ingrese la edad de la persona: ";
	cin >> edad;

	int precio;

	if (edad >= 0 && edad < 18) {
		precio = 7;
	}
	else if (edad >= 18 && edad <= 50) {
		precio = 15;
	}
	else {
		precio = 5;
	}

	cout << "\nEl precio de la entrada es: " << precio << " soles" << endl;
}
