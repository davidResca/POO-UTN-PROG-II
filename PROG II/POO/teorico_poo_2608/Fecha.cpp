#include "Fecha.h"
#include <string>
using namespace std;

Fecha::Fecha()
{
  _dia = 1;
  _mes = 1;
  _anio = 2023;
}

Fecha::Fecha(int dia, int mes, int anio)
{
  if (esDiaValido(anio, mes, dia))
  {
    _dia = dia;
    _mes = mes;
    _anio = anio;
  }
}

std::string Fecha::getFecha()
{
  return to_string(_dia) + "/" + to_string(_mes) + "/" + to_string(_anio);
}

int Fecha::getCantidadDiasDelMes(int mes, int anio)
{
  int cantidadDias = 0;
  int diasDelMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  esAnioBisiesto(anio) ? diasDelMes[1] = 29 : diasDelMes[1] = 28;

  cantidadDias = diasDelMes[mes - 1];

  cout << "el mes tiene " << cantidadDias << endl;

  return cantidadDias;
}

bool Fecha::esDiaValido(int anio, int mes, int dia)
{
  bool esValido = false;

  if (mes == 2 && esAnioBisiesto(anio))
  {
  }

  return esValido;
}

bool Fecha::esAnioBisiesto(int anio)
{
  bool esBisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);

  if (esBisiesto)
  {
    std::cout << "ES BISIESTO, estamos en esAnioBisiesto() " << endl;
  }
  else
  {
    std::cout << "NO NO NO ES BISIESTO, estamos en esAnioBisiesto() " << endl;
  }

  return esBisiesto;
};