#include <iostream>
#include <math.h>
using namespace std;

void main() {

	int dato;
	int N�meros_Le�dos = 0;
	int N�mero_Mayor = -INFINITY;
	int N�mero_Menor = INFINITY;
	int N�meros_Positivos = 0;
	int n�meros_Negativos = 0;
	float promedio = 0;

	for (int i = 1; i++;) {
		cout << "Ingrese numero: ";
		cin >> dato;
		if (dato == 0) {
			break;
		}
		N�meros_Le�dos = N�meros_Le�dos + 1; //numero se suma m�s 1 cada que se repite el codigo para hallar cuantos numeros se ley�

		if (N�mero_Mayor < dato) {
			N�mero_Mayor = dato; //dato reemplaza numero mayor y se repite if para hallar el siguiente dato mayor
		}
		if (N�mero_Menor > dato) {
			N�mero_Menor = dato; //dato reemplaza numero menor y se repite if para hallar el siguiente dato menor
		}
		if (dato > 0) {
			N�meros_Positivos = N�meros_Positivos + 1; //almacenar dato y contar cuantos hay.
		}
		if (dato < 0) {
			n�meros_Negativos = n�meros_Negativos + 1; //almacenar dato y contar cuantos hay.
		}
		promedio = promedio + dato;
	}

	cout << "\nNumero leidos: " << N�meros_Le�dos << endl;
	cout << "Numero mayor: " << N�mero_Mayor << endl;
	cout << "Numero menor: " << N�mero_Menor << endl;
	cout << "Numeros positivos: " << N�meros_Positivos << endl;
	cout << "Numeros negativos: " << n�meros_Negativos << endl;
	cout << "Promedio: " << promedio / N�meros_Le�dos << endl;

}