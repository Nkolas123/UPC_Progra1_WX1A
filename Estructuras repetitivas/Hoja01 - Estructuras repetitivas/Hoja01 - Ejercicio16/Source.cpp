#include<iostream>
using namespace std;

void main() {

	int limite, num = 1, anterior = 0, temporal;

	cout << "Ingrese el numero de terminos de la serie Fibonacci: ";
	cin >> limite;

	for (int i = 0; i < limite; i++)
	{
		cout << num;
		if (i < limite - 1) {
			cout << ", ";
		}
		else{
			cout << ".";
		}
		temporal = num;
		num = num + anterior;
		anterior = temporal;

	}

}
