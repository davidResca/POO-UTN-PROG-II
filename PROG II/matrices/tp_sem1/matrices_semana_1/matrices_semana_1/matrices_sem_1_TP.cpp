#include <iostream>
using namespace std;

/*
	Tenemos ventas ord por código, registrar montos según el día del mes 
	al que corresponda la venta.

*/

int main() {

	int codigoVenta, dia, mes;
	float monto;

	float recaudacion[12][31]{};

	cout << "Ingrese codigo de venta" << endl;
	cin >> codigoVenta;

	while (codigoVenta != 0) {
		cout << "Ingrese mes de la venta" << endl;
		cin >> mes;

		cout << "Ingrese dia de la venta" << endl;
		cin >> dia;

		cout << "Igrese monto de la venta" << endl;
		cin >> monto;

		//acumulador de montos
		recaudacion[mes - 1][dia - 1] += monto;

		cout << "Ingrese codigo de venta" << endl;
		cin >> codigoVenta;
	}

	int cantidadMesesSinVenta = 0;

	for (int m = 0; m < 12; m++) {
		bool hayRecaudacion = false;
		cout << "mes #" << m + 1;
		for (int d = 0; d < 31; d++) {
			if (recaudacion[m][d]) {
				hayRecaudacion = true;
				cout << "La recaudacion del " << d + 1 << '/' << m + 1 << "es de " << recaudacion[m][d] << endl;
			}
			if (!hayRecaudacion) {
				cantidadMesesSinVenta++;
			}
		}
	}

	cout << "Cantidad de meses sin venta: " << cantidadMesesSinVenta << endl;

	return 0;
}