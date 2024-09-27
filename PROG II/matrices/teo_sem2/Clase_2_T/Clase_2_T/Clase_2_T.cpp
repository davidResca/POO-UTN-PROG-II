#include <iostream>
using namespace std;

const string materias[20]
{
	"Programacion I",
	"AySO",
	"Matematica",
	"Organizacion empresarial",
	"Programacion II",
	"Probabilidad y estadistica",
	"Base de datos I",
	"Ingles I",
	"Programacion III",
	"Base de datos II",
	"Metodologia de sistemas I",
	"Ingles II",
	"Programacion IV",
	"Metodologia de sistemas II",
	"Introduccion al analisis de datos",
	"Legislacion",
	"Gestion de desarrollo de software",
	"Trabajo final integrador",
	"Ciencia de datos",
	"Taller de inteligencia artificial"
};

const int matriz[20][2]{ {320,10},{440,15},{360,10},{445,8},{560,2},{200,5},{180,3},{300,4},{150,4},{180,3},{40,1},{100,3},{200,2},{90,2},{90,3},{80,1},{60,1},{100,3},{30,1},{25,3} };


int main() {
	int legajo;
	int registro[20][12][31]{};

	cout << "Para iniciar ingrese su numero de legajo" << endl;
	cin >> legajo;
	
	while (legajo != 0) {
		
		int opcion;
		
		cout << "Ingrese la opción deseada :" << endl; 
		cout << "1) Ver materias sin acceso de alumnos, " << endl;
		cout << "2) Ver la materia con mayor registro de acceso de alumnos," << endl;
		cout << " 3) Ver la cantidad de accesos de alumnos a las aulas virtuales en Marzo" << endl;
		cin >> opcion;

		switch (opcion) {
		case 1:

		case 2:
		case 3:
		case 4: 

		}

		cout << "Ingrese numero de legajo" << endl;
		cin >> legajo;
	}

	return 0;
}