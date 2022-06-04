#include<iostream>
using namespace std;

void main() {

	int nota;

	cout << "Ingrese su nota: ";
	cin >> nota;

	if (nota >= 0 && nota < 12.50) {
		cout << "Desaprobado" << endl;
	}
	else if (nota >= 12.50 && nota < 20) {
		cout << "Aprobado" << endl;
	}
	else {
		cout << "Digite un nota valida" << endl;
	}

}
