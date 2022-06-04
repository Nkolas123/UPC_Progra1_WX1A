#include<iostream>
using namespace std;

void main() {

	int congresistas, opinion, suma = 0, opc1 = 0, opc2 = 0, opc3 = 0;
	float porc_abstiene, porc_contra, porc_favor;

	cout << "Ingrese la cantidad de congresistas encuestados: ";
	cin >> congresistas; 

	for (int i = 1; i <= congresistas; i++) {
		cout << "\nIngrese la opinion del congresista " << i << " (1: a favor; 2: en contra; 3: se abstiene): ";
		cin >> opinion;

		if (opinion == 1) {
			opc1 = opc1 + 1;
		}
		else if (opinion == 2) {
			opc2 = opc2 + 1;
		}
		else if (opinion == 3) {
			opc3 = opc3 + 1;
		}
	}

	porc_favor = ((float)opc1 / congresistas) * 100;
	porc_contra = ((float)opc2 / congresistas) * 100;
	porc_abstiene = ((float)opc3 / congresistas) * 100;

	cout << "\n-------------------------------------------------------------------" << endl;
	cout << "\nPorcentaje de congresistas que estan A FAVOR: " << porc_favor << "%" << endl;
	cout << "Porcentaje de congresistas que estan EN CONTRA: " << porc_contra << "%" << endl;
	cout << "Porcentaje de congresistas que SE ABSTIENEN: " << porc_abstiene << "%" << endl;
}
