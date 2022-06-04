#include<iostream>
using namespace std;

void main() {

	int num;
	
	do{	
		cout << "Ingrese un numero positivo: ";
		cin >> num;
	} while (num < 0);
	
	int resultado = 1;

	for (int i = 1; i <= num; i++)
	{
		resultado = resultado * i;		// resultado *= i;
	}

	cout << "\nEl valor de " << num << "! es: " << resultado << endl;
}
