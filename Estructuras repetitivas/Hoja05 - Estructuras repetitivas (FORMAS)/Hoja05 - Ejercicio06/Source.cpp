#include<iostream>
using namespace std;

void main() {

	int n;

	cout << "Ingrese un numero: ";
	cin >> n;
	cout << endl;

	for (int i = 1; i <= n; i++)
	{
		cout << "\t\t";
		for (int j = 1; j <= n; j++)
		{
			if (i == j) {
				cout << " *";
			}
			else if (j == 1) {
				cout << " *";
			}
			else if (i == n) {			// num es igual al limite que es el numero o n
				cout << " *";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	for (int i = 2; i <= n; i++)
	{
		cout << "\t\t";
		for (int j = 1; j <= n; j++)
		{
			if (i == j) {
				cout << " *";
			}
			else if (j == n) {		// num es igual al limite que es el numero o n
				cout << " *";
			}
			else if (i == 1) {			
				cout << " *";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

}