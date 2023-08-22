#include "Paqueteria.h"
#include <fstream>

Paqueteria *paq=new Paqueteria();

Paqueteria::Paqueteria()
{
    h=nullptr;
}

void Paqueteria::insertar(int id,string origen,string destino, float peso)
{
    Paquete *aux=new Paquete(id,origen,destino,peso,nullptr);

    if(!h)
    {
        h=aux;
    }
    else
    {
        aux->sig=h;
        h=aux;
    }
}

void Paqueteria::eliminar()
{
    Paquete*tmp=h;

    h=h->sig;
    delete tmp;
}

void Paqueteria::mostrar()
{
    Paquete*tmp=h;

    if(!tmp)
    {
        cout<<"Lista vacia..."<<endl;
    }
    else
    {
        while(tmp)
        {
            cout<<"ID:"<<tmp->id<<endl;
            cout<<"Origen:"<<tmp->origen<<endl;
            cout<<"Destino:"<<tmp->destino<<endl;
            cout<<"Peso:"<<tmp->peso<<"\n\n"<<endl;
            tmp=tmp->sig;
        }
    }
}

void Paqueteria::guardar()
{
    ofstream es;

    es.open("Paquetería.txt",ios::out);

    Paquete*tmp=h;

    if(!tmp)
    {
        cout<<"Lista vacia..."<<endl;
    }
    else
    {
        while(tmp->sig!=nullptr)
        {
            es<<tmp->id<<" "<<tmp->origen<<" "<<tmp->destino<<" "<<tmp->peso<<"\n";

            tmp=tmp->sig;
        }
    }
    es.close();
}

void Paqueteria::recuperar()
{
    ifstream Lec;

    int id;
    string ori,des;
    float peso;
    Paquete*sig;

    Lec.open("Paquetería.txt",ios::in);
    Lec>>id;
    while(!Lec.eof())
    {
        Lec>>ori;
        Lec>>des;
        Lec>>peso;
        Paquete *aux=new Paquete(id,ori,des,peso,nullptr);
        Paquete*tmp=h;
        if(!h)
        {
            h=aux;
        }
        else
        {
            tmp=h;
            while(tmp->sig!=nullptr)
            {
                tmp=tmp->sig;
            }
            tmp->sig=aux;
            tmp=tmp->sig;
            tmp->sig=nullptr;
        }
        Lec>>id;
    }
    Lec.close();

}
