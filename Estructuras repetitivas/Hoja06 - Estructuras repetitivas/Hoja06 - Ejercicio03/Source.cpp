#include<iostream>
using namespace std;

void main() {
	
	int o_nacional = 0, o_extran = 0;
	int hora, cant_mad = 0, cant_manana = 0, cant_tarde = 0, cant_noche = 0;
	int cant_depor = 0, cant_act = 0, cant_entre = 0;
	char tipo_noticia, origen;
	string mayor_hora, mayor_origen;

	while (true)
	{
		cout << "\nIngrese el tipo de noticia (D: deportes; A: actualidad; E: entretenimiento): ";
		cin >> tipo_noticia;

		if (tipo_noticia == 'X') {
			break;
		}

		if (tipo_noticia == 'D' || tipo_noticia == 'd') {
			cant_depor++;
		}
		if (tipo_noticia == 'A' || tipo_noticia == 'a') {
			cant_act++;
		}
		if (tipo_noticia == 'E' || tipo_noticia == 'e') {
			cant_entre++;
		}

		cout << "Ingrese la hora de publicacion (Entero positivo entre 0 y 23): ";
		cin >> hora;

		if (hora >= 0 && hora <= 5) {
			cant_mad++;
		}
		else if (hora >= 6 && hora <= 12) {
			cant_manana++;
		}
		else if (hora >= 12 && hora <= 17) {
			cant_tarde++;
		}
		else if (hora >= 18 && hora <= 23) {
			cant_noche++;
		}
		else {
			cout << "Digite una hora correcta";
			break;
		}

		cout << "Ingrese el origen (N: nacional; E: extranjera): ";
		cin >> origen;

		if (origen == 'N' || origen == 'n') {
			o_nacional++;
		}
		else if (origen == 'E' || origen == 'e') {
			o_extran++;
		}
	}

	if(cant_mad > cant_manana && cant_mad > cant_tarde && cant_mad > cant_noche){
		mayor_hora = "MADRUGADA";
	}
	else if (cant_manana > cant_mad && cant_manana > cant_tarde && cant_mad > cant_noche) {
		mayor_hora = "MANANA";
	}
	else if (cant_tarde > cant_manana && cant_tarde > cant_mad && cant_tarde > cant_noche) {
		mayor_hora = "TARDE";
	}
	else if (cant_noche > cant_manana && cant_noche > cant_tarde && cant_noche > cant_mad) {
		mayor_hora = "NOCHE";
	}

	if (o_nacional > o_extran) {
		mayor_origen = "NACIONALES";
	}
	if (o_extran > o_nacional) {
		mayor_origen = "EXTRANJERAS";
	}

	cout << "\n\nLos resultados son: " << endl;
	cout << "-----------------------" << endl;
	cout << "\nNoticias de Deporte: " << cant_depor << endl;
	cout << "Noticias de Actualidad: " << cant_act << endl;
	cout << "Noticias de Entretenimiento: " << cant_entre << endl;
	cout << "En la " << mayor_hora << " se publicaron mas noticias" << endl;
	cout << "Predominan las noticias " << mayor_origen << endl;
}