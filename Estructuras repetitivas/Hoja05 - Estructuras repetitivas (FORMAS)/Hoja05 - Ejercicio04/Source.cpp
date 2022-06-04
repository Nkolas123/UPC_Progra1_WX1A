#include<iostream>
using namespace std;

void main() {

	int num;

	cout << "Ingrese un numero: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)
		{
			if (i == j) {
				cout << " *";
			}
			else if (j > 1 && j < num && i > 1 && i < num) {
				cout << "  ";
			}
			else if (j >= 0 && j <= num && i >= 0 && i <= num) {
				cout << " *";
			}
		}
		cout << endl;
	}


}