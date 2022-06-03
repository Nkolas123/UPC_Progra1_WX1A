#include<iostream>
using namespace std;

void main() {

	int N1, N2;

	cout << "Ingrese dos numeros enteros: ";
	cin >> N1 >> N2;

	if (N1 % N2 == 0) {
		cout << N1 << " es multiplo de " << N2 << endl;
	}
	else {
		cout << N1 << " NO es multiplo de " << N2 << endl;
	}
}
