#include<iostream>
using namespace std;

void main() {

	int tipo_fumi, hectareas;
	int cant_mala = 0, cant_langos = 0, cant_gusanos = 0, cant_TA = 0;
	float precio = 0, pago_total = 0, mayor_demanda = 0, total = 0;

	while (true)
	{
		setlocale(LC_ALL, "es");

		do {
			cout << "Ingrese el tipo de fumigación (1: Mala hierba; 2: Langostas; 3: Gusanos; 4: Todo lo anterior): ";
			cin >> tipo_fumi;
		} while (!(tipo_fumi == 1 || tipo_fumi == 2 || tipo_fumi == 3 || tipo_fumi == 4 || tipo_fumi == -1));

		if (tipo_fumi == -1) {
			break;
		}

		do {
			cout << "Ingrese nunmero de hectareas: ";
			cin >> hectareas;
		} while (hectareas <= 0);

		if (tipo_fumi == 1) {
			if (hectareas > 500) {
				precio = (hectareas * 10.0) - (hectareas * 10.0 * 0.05);
			}
			else {
				precio = hectareas * 10.0;
			}
			cant_mala++;
		}
		if (tipo_fumi == 2) {
			if (hectareas > 500) {
				precio = (hectareas * 20.0) - (hectareas * 20.0 * 0.05);
			}
			else {
				precio = hectareas * 20.0;
			}
			cant_langos++;
		}
		if (tipo_fumi == 3) {
			if (hectareas > 500) {
				precio = (hectareas * 30.0) - (hectareas * 30.0 * 0.05);
			}
			else {
				precio = hectareas * 30.0;
			}
			cant_gusanos++;
		}
		if (tipo_fumi == 4) {
			if (hectareas > 500) {
				precio = (hectareas * 50.0) - (hectareas * 50.0 * 0.05);
			}
			else {
				precio = hectareas * 50.0;
			}
			cant_TA++;
		}
	
		if (precio > 1500) {
			pago_total += (precio - (precio * 0.10));
		}
		else {
			pago_total += precio;
		}

		mayor_demanda < cant_mala ? mayor_demanda = cant_mala : 0;
		mayor_demanda < cant_langos ? mayor_demanda = cant_langos : 0;
		mayor_demanda < cant_gusanos ? mayor_demanda = cant_gusanos : 0;
		mayor_demanda < cant_TA ? mayor_demanda = cant_TA : 0;
		
	}


	cout << "\nLos resultados son: " << endl;
	cout << "----------------------" << endl;
	cout << "\nMala hierba: " << cant_mala << endl;
	cout << "Langostas: " << cant_langos << endl;
	cout << "Gusanos: " << cant_gusanos << endl;
	cout << "Todo lo anterior: " << cant_TA << endl;

	cout << "\nTipo de fumigacion con mayor demanda: " << endl;
	if (cant_mala == mayor_demanda) cout << "Mala hierba" << endl;
	if (cant_langos == mayor_demanda) cout << "Langostas" << endl;
	if (cant_gusanos == mayor_demanda) cout << "Gusanos" << endl;
	if (cant_TA == mayor_demanda) cout << "Todo lo anterior" << endl;

	cout << "\nTotal a pagar: " << pago_total << endl;
}