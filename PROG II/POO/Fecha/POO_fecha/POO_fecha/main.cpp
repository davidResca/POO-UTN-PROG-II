#include <iostream>
#include "Fecha.h"
using namespace std;


int main() {

	Fecha nuevaFecha(1, 3, 2023);
	Fecha nuevaFechaDOS(1, 6, 2023);
	Fecha nuevaFechaTRES(1, 3, 2024);

	cout << "FECHA 1 " << nuevaFecha.toString() << endl;
	cout << "FECHA 2 " << nuevaFechaDOS.toString() << endl;
	cout << "FECHA 3 " << nuevaFechaTRES.toString() << endl;

	/*cout << " ----------------------- SUMAR DIAS ----------------------------" << endl;

	nuevaFecha.aumentarDia();
	nuevaFechaDOS.aumentarDia();
	nuevaFechaTRES.aumentarDia();

	cout << "FECHA 1 " << nuevaFecha.toString() << endl;
	cout << "FECHA 2 " << nuevaFechaDOS.toString() << endl;
	cout << "FECHA 3 " << nuevaFechaTRES.toString() << endl;

	nuevaFecha.aumentarDia();
	nuevaFechaDOS.aumentarDia();
	nuevaFechaTRES.aumentarDia();

	cout << "FECHA 1 " << nuevaFecha.toString() << endl;
	cout << "FECHA 2 " << nuevaFechaDOS.toString() << endl;
	cout << "FECHA 3 " << nuevaFechaTRES.toString() << endl;*/

	/*cout << " ----------------------- RESTAR DIAS ----------------------- " << endl;

	cout << "FECHA 1 " << nuevaFecha.toString() << endl;
	cout << "FECHA 2 " << nuevaFechaDOS.toString() << endl;
	cout << "FECHA 3 " << nuevaFechaTRES.toString() << endl;

	nuevaFecha.restarDia();
	nuevaFechaDOS.restarDia();
	nuevaFechaTRES.restarDia();

	cout << "FECHA 1 " << nuevaFecha.toString() << endl;
	cout << "FECHA 2 " << nuevaFechaDOS.toString() << endl;
	cout << "FECHA 3 " << nuevaFechaTRES.toString() << endl;

	nuevaFecha.restarDia();
	nuevaFechaDOS.restarDia();
	nuevaFechaTRES.restarDia();

	cout << "FECHA 1 " << nuevaFecha.toString() << endl;
	cout << "FECHA 2 " << nuevaFechaDOS.toString() << endl;
	cout << "FECHA 3 " << nuevaFechaTRES.toString() << endl;*/

	return 0;
}