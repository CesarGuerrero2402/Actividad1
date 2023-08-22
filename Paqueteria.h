#ifndef PAQUETERIA_H
#define PAQUETERIA_H
#include "Paquete.h"
#include <iostream>
#include <fstream>

using namespace std;

class Paqueteria
{
    public:
        Paqueteria();
        Paqueteria(Paquete*);

        Paquete *h;

        void insertar(int, string, string, float);
        void eliminar();
        void mostrar();
        void guardar();
        void recuperar();


    protected:

    private:
};

#endif // PAQUETERIA_H
