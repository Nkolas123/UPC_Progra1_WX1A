#include<iostream>
using namespace std;

void main() {

	int num;
	cout << "Ingrese un numero positivo: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		cout << "\t\t";
		for (int j = 1; j <= num; j++)
		{
			if (i == j) {
				cout << "* ";
			}
			else if (j == 1) {
				cout << "* ";
			}
			else if(i == num){
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}


}