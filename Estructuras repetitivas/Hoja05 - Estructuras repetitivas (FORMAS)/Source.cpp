#include <iostream>

using namespace std;


int main() {
	int numero = 5;

	for (int i = 1; i <= numero; i++)
	{
		for (int j = 1; j <= numero - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= (2 * i) - 1; j++)
		{
			cout << j;
		}
		cout << endl;

	}
	int espacios = 1;
	int valor = 1;
	for (int i = 1; i <= numero - 1; i++)
	{
		for (int j = 1; j <= espacios; j++)
		{
			cout << ' ';
		}
		espacios++;
		valor = 1;
		for (int j = (2 * numero) - (2 * i) - 1; j > 0; j--) {
			cout << valor;
			valor++;
		}
		cout << endl;
	}
	return 0;
}
