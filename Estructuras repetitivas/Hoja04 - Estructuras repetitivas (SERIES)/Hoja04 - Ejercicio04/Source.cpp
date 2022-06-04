#include<iostream>
using namespace std;

int main() {

	char empresa, tipo_transporte, hotel;
	int numero_dias, cant_viajeros = 0, contador = 0, viajeros_oltursa = 0;
	float precio = 0, precio_noche, porc_oltursa;

	float suma_O = 0, suma_C = 0, suma_L = 0;
	float oltursa_Bcama = 0, cruz_Bcama = 0, linea_Bcama = 0, oltursa_Vip = 0, cruz_Vip = 0, linea_Vip = 0;
	float precio_nocheP = 0, precio_nocheE = 0, precio_nocheC = 0, precio_hotel = 0;

	string mayor;

	while (true)
	{
		cout << "\nIngrese el tipo de transporte (B: bus cama; V: servicio vip): ";
		cin >> tipo_transporte;

		if (tipo_transporte == 'F') {
			break;
		}

		cout << "Ingrese la empresa en la que viaja (O: Oltursa; C: Cruz del Sur; L: Linea): ";
		cin >> empresa;
		cout << "Ingrese el Hotel en el que se hospeda (P: Los Pinos; E: Emperador; C: Cañaveral): ";
		cin >> hotel;
		cout << "Numero de dias que durara el viaje: ";
		cin >> numero_dias;

		contador++;

		if (empresa == 'O') {
			if (tipo_transporte == 'B') {
				precio = 150;
				oltursa_Bcama += precio;
			}
			else if (tipo_transporte == 'V') {
				precio = 230;
				oltursa_Vip += precio;
			}
			viajeros_oltursa++;
			suma_O = suma_O + precio;
		}
		if (empresa == 'C') {
			if (tipo_transporte == 'B') {
				precio = 200;
				cruz_Bcama += precio;
			}
			else if (tipo_transporte == 'V') {
				precio = 300;
				cruz_Vip += precio;
			}
			suma_C = suma_C + precio;
		}
		if (empresa == 'L') {
			if (tipo_transporte == 'B') {
				precio = 100;
				linea_Bcama += precio;
			}
			else if (tipo_transporte == 'V') {
				cout << "No hay mi kin";
			}
			suma_L = suma_L + precio;
		}

		hotel == 'P' ? precio_nocheP = 20 * 2.60 * numero_dias : 0;
		hotel == 'E' ? precio_nocheE = 30 * 2.60 * numero_dias : 0;
		hotel == 'C' ? precio_nocheC = 30 * 2.60 * numero_dias : 0;

		if (hotel == 'E' || hotel == 'C') {
			cant_viajeros = cant_viajeros + 1;
		}

		porc_oltursa = viajeros_oltursa * (100.0 / contador);

		if ((precio_nocheP > precio_nocheE) && (precio_nocheP > precio_nocheC)) {
			mayor = "Los Pinos";
			precio_hotel = precio_nocheP;
		}
		else if ((precio_nocheE > precio_nocheP) && (precio_nocheE > precio_nocheC)) {
			mayor = "Emperador";
			precio_hotel = precio_nocheE;
		}
		else {
			mayor = "Canaveral";
			precio_hotel = precio_nocheC;
		}
	}

	cout << "\nCantidad de viajeros que se alojan en un hotel de US$ 30: " << cant_viajeros << endl;
	cout << "Porcentaje de viajeros que eligieron Oltursa: " << porc_oltursa << "%" << endl;

	cout << "\n-Reporte de ingresos de cada empresa-" << endl;
	cout << "|OLTURSA|" << endl;
	cout << "Bus cama: " << oltursa_Bcama << endl;
	cout << "Servicio VIP: " << oltursa_Vip << endl;
	cout << "|CRUZ DEL SUR|" << endl;
	cout << "Bus cama: " << cruz_Bcama << endl;
	cout << "Servicio VIP: " << cruz_Vip << endl;
	cout << "|LINEA|" << endl;
	cout << "Bus cama: " << linea_Bcama << endl;

	cout << "\nEl hotel que registro mas ingresos fue " << mayor << " y el monto fue: " << precio_hotel << endl;

	return 0;
}