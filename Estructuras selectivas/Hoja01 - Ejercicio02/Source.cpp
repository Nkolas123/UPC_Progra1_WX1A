#include<iostream>
using namespace std;

void main() {

	float dinosaurio, elefante;

	cout << "Ingrese el peso del dinosaurio: ";
	cin >> dinosaurio;
	cout << "Ingrese el peso del elefante: ";
	cin >> elefante;

	if (dinosaurio > elefante) {
		cout << "\nEl dinosaurio pesa mas que el elefante" << endl;
	}
	else if (elefante > dinosaurio) {
		cout << "\nEl elefante pesa mas que el elefante" << endl;
	}
	else {
		cout << "\nPesan lo mismo" << endl;
	}

}