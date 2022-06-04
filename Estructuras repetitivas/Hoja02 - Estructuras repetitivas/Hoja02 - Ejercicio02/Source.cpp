#include<iostream>
using namespace std;

void main() {

	double cantidad, cantidad_inicial, interes;

	cout << "Escribe la cantidad a invertir: ";
	cin >> cantidad;

	cantidad_inicial = cantidad;
	interes = 0;

	for (int i = 1; i <= 120; i++)
	{
		interes = cantidad * .005;
		cantidad += interes;

	}
	cout << "\nLa ganancia obtenida durante al cabo de 10 años es: S/." << cantidad - cantidad_inicial << endl;
	cout << "La ganancia obtenida con la inversion hecha es: S/." << cantidad << endl;


}