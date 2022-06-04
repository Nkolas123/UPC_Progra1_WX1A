#include<iostream>
using namespace std;

void main() {

	int n;
	int direction = 1;
	int index = 0;
	cout << "Ingrese un numero: ";
	cin >> n;


	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		int direction = 1;
		int index = 0;

		for (int j = 1; j <= (2 * i) - 1; j++)
		{
			index = index +  1 * direction;
			if (index == i) {
				direction = direction * (-1);
			}
			cout << index;
		}
		cout << endl;
	}


}