#include<iostream>
#include<stdlib.h>
using namespace std;

// srand((unsigned)time(NULL));
// int aleatorio = 0 + (rand() % 3

void main() {

	int clientes;
	float total, monto_recaudado = 0, importe_compra;
	string color_bola;

	cout << "\n******* LA BOLITA DE DESCUENTO ********" << endl;
	cout << " " << endl;
	cout << "Digite el numero de clientes: ";
	cin >> clientes;


	for (int i = 1; i <= clientes; i++)
	{
		cout << "\nIngrese el monto de compra del cliente " << i << ": " << endl;
		cin >> importe_compra;

		srand((unsigned)time(NULL));
		int aleatorio = 1 + (rand() % 3);

		if (aleatorio == 1) {
			cout << "Te toco la bolita roja";
			total = importe_compra * 0.40;
			cout << "\nEl monto a pagar es: " << total << endl;
		}
		if (aleatorio == 2) {
			cout << "Te toco la bolita amarilla";
			total = importe_compra * 0.25;
			cout << "\nEl monto a pagar es: " << total << endl;
		}
		if (aleatorio == 3) {
			cout << "Te toco la bolita blanca";
			total = importe_compra;
			cout << "\nEl monto a pagar es: " << total << endl;
		}

		monto_recaudado = monto_recaudado + total;
	}

	cout << "\nEl monto recaudado por la tienda es: " << monto_recaudado << endl;
}
