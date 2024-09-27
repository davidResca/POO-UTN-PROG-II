#include <iostream>
#include "Fecha.h"
using namespace std;


int main() {

	Fecha nuevaFecha(2, 2, 2023);
	
	cout << nuevaFecha.toString();

	return 0;
}