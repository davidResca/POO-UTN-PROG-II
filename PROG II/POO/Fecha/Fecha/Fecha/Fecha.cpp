#include "Fecha.h"
#include <string>
using namespace std;

Fecha::Fecha()
{
    setFechaDefault();
}

Fecha::Fecha(int dia, int mes, int anio)
{
    _dia = dia;
    _mes = mes;
    _anio = anio;

    validarIngreso(dia, mes, anio);
}



int Fecha::getDia()
{
    return _dia;
}
int Fecha::getMes()
{
    return _mes;
}
int Fecha::getAnio()
{
    return _anio;
}

void Fecha::setFechaDefault() {
    _dia = 1;
    _mes = 1;
    _anio = 2023;
}
void Fecha::validarIngreso(int &dia, int &mes, int &anio) {
    bool diaValido = esDiaValido(anio, mes, dia);
    bool mesValido = esMesValido(mes);
    bool anioValido = esAnioValido(anio);

    if (!diaValido || !mesValido || !anioValido) {
        setFechaDefault();
    }
}

bool Fecha::esAnioValido(int &anio) {
    bool anioValido = false;
    if (anio >= 1) {
        anioValido = true;
    }
    return anioValido;
}
bool Fecha::esMesValido(int &mes) {
    bool mesValido = false;
    if (mes >= 1 || mes <= 12) {
        mesValido = true;
    }
    return mesValido;
}
bool Fecha::esDiaValido(int &dia, int &mes, int &anio)
{
    bool esValido = false;
    int cantidadDiasEnElMes = getCantidadDiasDelMes(mes, anio);

    if (dia >= 1 && dia <= cantidadDiasEnElMes) {
        esValido = true;
    }

    return esValido;
}

int Fecha::getCantidadDiasDelMes(int &mes, int &anio)
{
    int cantidadDias = 0;
    int diasDelMes[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    esAnioBisiesto(anio) ? diasDelMes[1] = 29 : diasDelMes[1] = 28;

    cantidadDias = diasDelMes[mes - 1];

    return cantidadDias;
}
bool Fecha::esAnioBisiesto(int anio)
{
    bool esBisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
    return esBisiesto;
};

std::string Fecha::toString() {
    return to_string(_dia) + "/" + to_string(_mes) + "/" + to_string(_anio);
}