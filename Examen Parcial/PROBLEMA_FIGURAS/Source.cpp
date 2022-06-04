#include<iostream>
using namespace std;

void main() {

	int n;

	cout << "Ingrese un numero: ";
	cin >> n;

	cout << endl;

	for (int f = 1; f <= 2 * n -1; f++)
	{
		for (int c = 1; c <= 2 * n - 1; c++)
		{
			if (f == n || c == n || f == c || f + c == 2 * n) {
				cout << n << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}


}
