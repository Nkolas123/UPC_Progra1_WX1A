#include<iostream>
using namespace std;
// c = columnas && f = filas

void main() {

	int n;

	cout << "Ingrese un numero: ";
	cin >> n;

	for (int f = 1; f <= n * 2 - 1; f++)
	{
		for (int c = 1; c <= n * 2 - 1; c++)
		{
			int valor = abs(n - c) + 1;
			int filtro = abs(n - f) + 1;
			if (valor >= filtro) {
				cout << filtro << " ";
			}
			else {
				cout << "x ";
			}
		}
		cout << endl;
	}


}