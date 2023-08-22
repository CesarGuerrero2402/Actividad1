#ifndef PAQUETE_H
#define PAQUETE_H
#include <string>
#include <fstream>

using namespace std;

class Paquete
{
    public:
        Paquete();
        Paquete(int,string,string,float,Paquete*);

        int id;
        string origen,destino;
        float peso;
        Paquete*sig;

    protected:

    private:
};

#endif // PAQUETE_H
