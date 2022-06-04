#include<iostream>
using namespace std;

void main() {

	char tipoMat, tipoServ;
	int hora, mayorMaterial = 0, cantRegistro = 0;
	float regManana = 0, montoTotal = 0, montoVenta = 0;
	int cantLibro = 0, cantArt = 0, cantMono = 0, venta = 0, montoprestamo = 0;
	float porcRegistro = 0, montoPromedio = 0, montoServ = 0, montoServVenta = 0;

	while (true)
	{
		do {
			cout << "Tipo de material (L: Libro; A: Articulo; M: Monografia): ";
			cin >> tipoMat;
		} while (!(tipoMat == 'L' || tipoMat == 'A' || tipoMat == 'M' || tipoMat == 'X' || tipoMat == 'l' || tipoMat == 'a' || tipoMat == 'm' || tipoMat == 'x'));

		if (tipoMat == 'X' || tipoMat == 'x') {
			break;
		}
		do {
			cout << "Hora de registro: ";
			cin >> hora;
		} while (!(hora > 0 && hora < 23));

		do {
			cout << "Tipo de servicio (P: Préstamo; V: Venta): ";
			cin >> tipoServ;
		} while (!(tipoServ == 'P' || tipoServ == 'V' || tipoServ == 'p' || tipoServ == 'v'));

		do {
			cout << "Monto del servicio: ";
			cin >> montoServ;
		} while (!(montoServ > 0));

		if (tipoMat == 'L' || tipoMat == 'l') {
			if (hora > 0 && hora <= 23) {
				if (hora >= 6 && hora <= 12) {
					if (tipoServ == 'P' || tipoServ == 'p') {
						cout << montoServ;
						montoprestamo += montoServ;
					}
					if (tipoServ == 'V' || tipoServ == 'v') {
						cout << montoServ;
					}
					regManana++;
				}
				cantRegistro++;
			}
			cantArt++;
		}
		if (tipoMat == 'A' || tipoMat == 'a') {
			if (hora > 0 && hora <= 23) {
				if (hora >= 6 && hora <= 12) {
					if (tipoServ == 'P' || tipoServ == 'p') {
						cout << montoServ;
					}
					if (tipoServ == 'V' || tipoServ == 'v') {
						cout << montoServ;
						montoVenta += montoServ;
						venta++;
					}
					regManana++;
				}
				cantRegistro++;
			}
			cantLibro++;
		}
		if (tipoMat == 'M' || tipoMat == 'm') {
			if (hora > 0 && hora <= 23) {
				if (hora >= 6 && hora <= 12) {
					if (tipoServ == 'P' || tipoServ == 'p') {
						cout << montoServ;
					}
					if (tipoServ == 'V' || tipoServ == 'v') {
						cout << montoServ;
						montoVenta += montoServ;
						venta++;
					}
					regManana++;
				}
				cantRegistro++;
			}
			cantMono++;
		}


		if (mayorMaterial < cantLibro) mayorMaterial == cantLibro;
		if (mayorMaterial < cantArt) mayorMaterial == cantArt;
		if (mayorMaterial < cantMono) mayorMaterial == cantMono;

	}

	porcRegistro = 100.0 * float(regManana / cantRegistro);

	cout << "\nPorcentaje de registros durante la mañana: " << porcRegistro << "%" << endl;
	cout << "Monto promedio de venta de los articulos o monografias: " << montoPromedio << endl;
	cout << "El material o materiales con mayor frecuencia: " << endl;
	if (mayorMaterial = cantLibro) cout << "Libro" << endl;
	if (mayorMaterial = cantArt) cout << "Articulo" << endl;
	if (mayorMaterial = cantMono) cout << "Monografia" << endl;

	cout << "Mayor monto que se paga por el prestamo de un libro: " << "No Hubo";

}