#include<iostream>
using namespace std;

void main() {

	int num;

	cout << "Ingrese un numero: "; 
	cin >> num;

	int multi = 0;

	for (int i = 1; i <=  num; i++)
	{
		multi = num * i;

		cout << num << " * " << i << " = " << multi << endl;
	}

}
