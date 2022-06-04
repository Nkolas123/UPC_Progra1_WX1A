#include<iostream>
#include<stdlib.h>
using namespace std;

void main() {

	float promedio_peso = 0, suma_peso = 0, contador = 0, peso, b = 0, diferencia;
	string aumento = "SUBIO";
	string disminuyo = "BAJO";

	while (true) {
		for (int i = 1; i <= 5; i++)
		{
			for (int b = 1; b <= 10; b++)
			{
				cout << "Peso del miembro " << i << " en la bascula " << b << endl;
				cin >> peso;
				b = (b - 1) + 1;
			}	

			if (i == 1) {
				suma_peso = suma_peso + peso;
				promedio_peso = suma_peso / 10;
				diferencia = peso - promedio_peso;
			}
			if (i == 1 && b == 1) {
				if (diferencia < 0) {
					cout << disminuyo << " " << abs(diferencia) << " kilos" << endl;
				}
				else {
					cout << aumento << " " << abs(diferencia) << " kilos" << endl;
				}
			}

			if (i == 2) {
				suma_peso = suma_peso + peso;
				promedio_peso = suma_peso / 10;
				diferencia = peso - promedio_peso;

				if (diferencia < 0) {
					cout << disminuyo << diferencia << " kilos" << endl;
				}
				else {
					cout << aumento << diferencia << " kilos" << endl;
				}
			}
			if (i == 3) {
				suma_peso = suma_peso + peso;
				promedio_peso = suma_peso / 10;
				diferencia = peso - promedio_peso;

				if (diferencia < 0) {
					cout << disminuyo << diferencia << " kilos" << endl;
				}
				else {
					cout << aumento << diferencia << " kilos" << endl;
				}
			}
			if (i == 4) {
				suma_peso = suma_peso + peso;
				promedio_peso = suma_peso / 10;
				diferencia = peso - promedio_peso;

				if (diferencia < 0) {
					cout << disminuyo << diferencia << " kilos" << endl;
				}
				else {
					cout << aumento << diferencia << " kilos" << endl;
				}
			}
			if (i == 5) {
				suma_peso = suma_peso + peso;
				promedio_peso = suma_peso / 10;
				diferencia = peso - promedio_peso;

				if (diferencia < 0) {
					cout << disminuyo << diferencia << " kilos" << endl;
				}
				else {
					cout << aumento << diferencia << " kilos" << endl;
				}
			}
		}
	}
}