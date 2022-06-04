#include<iostream>
using namespace std;

void main() {

	char destino, hotel, transporte;
	int cant_caja = 0, cant_tacna = 0, cant_huaraz = 0, hotel_30 = 0, precio = 0, total = 0;;

	while (true)
	{
		cout << "Ingrese el destino (C: Cajamarca; T: Tacna; H: Huaraz; F: Fin): ";
		cin >> destino;

		if (destino == 'F') {
			break;
		}

		cout << "Ingrese el hotel donde se hospedará (P: Los Pinos; E: Emperador; C: Canaveral): ";
		cin >> hotel;
		cout << "Ingrese el tipo de transporte (B: bus; A: Avion): ";
		cin >> transporte;

		if (destino == 'C') {
			if (hotel == 'P') {
				precio = 20.0 * 2.68;
			}
			if (transporte == 'B') {
				precio = 165;
				cout << "Monto a pagar es: "
			}
			if (transporte == 'A') {
				precio = 84.0 * 2.68;
			}
			cant_caja++;
		}
		if (destino == 'T') {
			if (hotel == 'E') {
				precio = 30.0 * 2.68;
				hotel_30++;
			}
			if (transporte == 'B') {
				precio = 138;
			}
			if (transporte == 'A') {
				precio = 133.0 * 2.68;
			}
			cant_tacna++;
		}
		if (destino == 'H') {
			if (hotel == 'C') {
				precio = 30.0 * 2.68;
				hotel_30++;
			}
			if (transporte == 'B') {
				precio = 63;
			}
			if (transporte == 'A') {
				precio = 0;
			}
			cant_huaraz++;
		}		

	}

	// Esta mal el problema xd
}
