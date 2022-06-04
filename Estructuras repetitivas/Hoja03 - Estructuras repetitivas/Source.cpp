#include<iostream>
using namespace std;

void main() {

	int B, E;

	cout << "Ingrese dos numeros enteros positivos" << endl;
	cout << "Primer numero: "; cin >> B;
	cout << "Primer numero: "; cin >> E;

	int resultado = 1;

	for (int i = 1; i <= E; i++)
	{
		resultado = resultado * B;
	}

	cout << "\n" << B << "^" << E << " es igual a: " << resultado << endl;

}
