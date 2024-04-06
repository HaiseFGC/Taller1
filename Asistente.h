#pragma once
#include <iostream>
using namespace std;

class Asistente{
    private:
        string nombre;
        int edad;
        string ocupacion;
        string lugar;
    public:

        Asistente(string nombre, int edad, string ocupacion, string lugar);
        Asistente();

        string getNombre() const;
        int getEdad() const;
        string getOcupacion() const;
        string getLugar() const;
        void printDetalles() const;

        void printDetalles() const;

};
