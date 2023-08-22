#include "Paquete.h"
#include <fstream>

using namespace std;

Paquete::Paquete(int id,string origen,string destino, float peso,Paquete* sig)
{
    this->id=id;
    this->destino=destino;
    this->origen=origen;
    this->peso=peso;
}

Paquete::Paquete()
{

    id=0;
    origen="";
    destino="";
    peso=0.0;
    sig=nullptr;
}
