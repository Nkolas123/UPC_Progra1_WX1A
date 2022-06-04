#include<iostream>
using namespace std;

void main() {

	int n;
	do {
		cout << "Ingrese el numero: ";
		cin >> n;
	} while (n < 0 || n >= 10);

	int total = n * 2 - 1;

	for (int f = 1; f <= total; f++)
	{
		for (int c = 1; c <= total; c++)
		{
			int valor = abs(abs(c - n) - n);
			int filtro = abs(abs(f - n) - n);
		
			if (c == 1){
				cout << filtro << " ";
			}
			else if (f == 1) {
				cout << valor << " ";
			}
			else if (c == total) {
				cout << filtro << " ";
			}
			else if (f == total) {
				cout << valor << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}


}