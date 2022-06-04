#include<iostream>
using namespace std;

void main() {

	int ancho, altura, espacio, filtro = 0, valor = 0;

	cout << "Ingrese el ancho: ";
	cin >> ancho;
	cout << "Ingrese la altura: ";
	cin >> altura;
	cout << "Ingrese el espaciado: ";
	cin >> espacio;

	cout << endl;
	int i = 0;

	for (int f = 1; f <= altura; f++)
	{
		for (int c = 1; c <= ancho; c++)
		{
			filtro = abs(c - altura);
			if (c == 1) {
				cout << c << " ";
			}
			else if (c == ancho || c == (ancho / 10) * 10 || c == ancho / 2) {
				cout << 0 << " ";
			}
			else if ((f == 1 || f == 4 || f == 7 || f == 10) && c > ancho / 2) {
				cout << filtro << " ";
			}
			else if ((f == 1 || f == 4 || f == 7 || f == 10) && c < ancho / 2) {
				cout << c << " ";
			}
			else {
				cout << "  ";
			}
		}

		i++;
		cout << endl;
	}



}
