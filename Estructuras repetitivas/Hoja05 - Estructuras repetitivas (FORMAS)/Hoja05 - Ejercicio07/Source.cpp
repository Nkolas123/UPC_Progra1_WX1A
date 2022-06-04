#include<iostream>
using namespace std;

void main() {
	int _columnas = 1;
	int numero = 5;
	int vueltas;
	cin >> vueltas;
	if (vueltas > 10) {
		//mostrar un mensaje de numero invalido
	}
	else {
		
		for (int filas = 1; filas <= numero; filas++)
		{
			for (int columnas = 1; columnas <= numero * vueltas; columnas++)
			{
				if (_columnas == filas) {
					cout << "*";
				} 
				else if (_columnas == 1) {
					cout << "*";
				}
				else if (filas == numero) {
					cout << "*";
				}
				else {
					cout << " ";
				}
				if (_columnas % numero == 0) {
					_columnas = 0;
					cout << "\t";
				}
				_columnas++;
			}
			cout << endl;
		}
	}

}