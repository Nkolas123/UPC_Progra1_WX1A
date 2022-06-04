#include<iostream>
using namespace std;

void main() {

	int N, suma = 0;

	cout << "Ingrese N: ";
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		if ((i > 0) && i % 3 == 0) {
			suma += i;
			cout << i << " ";
		}
	}

}

