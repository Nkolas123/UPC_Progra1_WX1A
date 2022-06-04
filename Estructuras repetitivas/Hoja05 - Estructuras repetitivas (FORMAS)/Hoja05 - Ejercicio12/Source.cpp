#include<iostream>
using namespace std;

void main() {

	int n;

	cout << "Ingrese un numero: ";
	cin >> n;

	int letra = 64;

	for (int f = 1; f <= n; f++)
	{
		for (int c = 1; c <= n - f; c++)
		{
			cout << " ";
		}
		for (int c = 1; c <= (2 * f) - 1; c++)
		{
			cout << char(letra + c);
		}
		cout << endl;
	}

	for (int f = n - 1; f >= 1; f--)
	{
		for (int c = 1; c <= n - f; c++)
		{
			cout << " ";
		}
		for (int c = 1; c <= (2 * f) - 1; c++)
		{
			cout << char(letra + c);
		}
		cout << endl;
	}

}