#include<iostream>
using namespace std;

void main() {

	int num;
	char caracter;

	cout << "Ingrese un numero: ";
	cin >> num;
	cout << "Ingrese un caracter: ";
	cin >> caracter;

	while (num > 0)
	{
		for (int i = 1; i <= num; i++)
		{
			cout << caracter;
		}
		cout << endl;
		num--;
	}

	/* OTRA FORMA:
	
	for (int i = 1; i <= num; i++)
	{
		cout << endl;
		for (int j = 1; j <= num; j++)
		{
			if (i <= j) {
				cout << "*";
			}
		}
	}
	*/
}