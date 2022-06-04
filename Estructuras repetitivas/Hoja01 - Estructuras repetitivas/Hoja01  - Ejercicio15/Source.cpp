#include<iostream>
using namespace std;

void main() {

	int num, contador = 0, suma = 0;

	cout << "Ingrese un numero: ";
	cin >> num;

	for (int i = 1; i < num; i++)
	{
		if (num % i == 0) {
			suma = suma + i;
		}
	}
	if (suma == num) {
		cout << "\nEs un numero perfecto";
	}
	else {
		cout << "\nNO es un numero perfecto";
	}

}
