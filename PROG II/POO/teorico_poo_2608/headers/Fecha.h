#pragma once
#include <iostream>
#include <string> 

class Fecha {
private:
    int _dia;
    int _mes;
    int _anio;

public:
    Fecha();
    Fecha(int dia, int mes, int anio);
    std::string getFecha();
    int getCantidadDiasDelMes(int mes, int anio);
    bool esAnioBisiesto(int anio);
    bool esDiaValido(int anio, int dia, int mes);
};