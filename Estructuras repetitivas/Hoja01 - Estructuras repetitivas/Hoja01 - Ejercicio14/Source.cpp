#include<iostream>
using namespace std;

void main() {

	int num;

	cout << "Digite un numero: ";
	cin >> num;

	while (num >= 1) {		// 123456789
		cout << num % 10;		// 9
		num /= 10;			// 12345678
	}

}