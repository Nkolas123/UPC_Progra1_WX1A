#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void main() {

	int num, dato, aleatorio, intentos_max = 12, contador = 0;
	int intentos = 0;

	srand(time(NULL)); // Generar numero aleatorio
	aleatorio = 1 + rand() % (100); // Establecer rango de numero aleatorio

	for (int i = 1; i++;)
	{
		cout << "\nIntento" << i - 1 << endl;
		cout << "Ingrese numero: ";
		cin >> num;
		
		intentos = intentos + 1;	// intentos++;

		if (num > aleatorio) {
			cout << "\nEl numero es menor" << endl;
		}
		else if (num < aleatorio) {
			cout << "\nEl numero es mayor" << endl;
		}
		else if (num == aleatorio) {
			if (intentos >= 1 && intentos <= 3) {
				cout << "\nFue pura suerte!!" << endl;
			}
			else if (intentos >= 4 && intentos <= 6) {
				cout << "\nEres bueno!" << endl;
			}
			else if (intentos == 7) {
				cout << "\nNo esta mal" << endl;
			}
			else if (intentos == 8) {
				cout << "\nSe puede mejorar" << endl;
			}
			else {
				cout << "\nQue mal estas !! BRUTO CTMREEE!!" << endl;
			}
			break;
		}

		intentos_max = intentos_max - 1;	// intentos_max--;
		
		if (intentos_max == 0) {
			cout << "\nIMBESIL DE MIERDA!!!!!!" << endl;
			break;
		}
	}

}