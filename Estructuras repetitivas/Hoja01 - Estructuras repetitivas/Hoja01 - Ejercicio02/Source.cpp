#include<iostream>
using namespace std;

void main() {

	int N, suma = 0;

	cout << "Ingrese N: ";
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		if (i % 2 != 0) {
			suma += i;
		}
	}

	cout << "\nLa suma es: " << suma << endl;

}