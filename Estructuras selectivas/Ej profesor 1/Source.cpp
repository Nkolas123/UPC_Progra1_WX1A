#include<iostream>
#include<math.h>
using namespace std;

void main() {
	cout << "1. Area de un triangulo" << endl;
	cout << "2. Area de un rectangulo" << endl;
	cout << "3. Area de un circulo" << endl;
	cout << "4. Area de un cuadrado" << endl;
	cout << "5. Salir" << endl;

	int opc;
	cin >> opc;
	float area;

	switch (opc) {
		case 1:
			int base, altura;
			cout << "Digite la base: "; cin >> base;
			cout << "Digite la altura: "; cin >> altura;
			area = (base * altura) / 2;
			cout << "\nEl area es: " << area;
			break;
		case 2:
			int baseR, alturaR;
			cout << "Digite la base: "; cin >> baseR;
			cout << "Digite la altura: "; cin >> alturaR;
			area = baseR * alturaR;
			cout << "\nEl area es: " << area;
			break;
		case 3:
			int radio;
			cout << "Digite el radio: "; cin >> radio;
			area = 3.14 * pow(radio, 2);
			cout << "\El area es: " << area;
			break;
		case 4:
			int lado;
			cout << "Digite el lado: "; cin >> lado;
			area = pow(lado, 2);
			cout << "\El area es: " << area;
			break;
		case 5:
			cout << "\nSaliste del programa";
			break;
		default:
			cout << "\nDigite una opcion valida";
			break;
	}

}