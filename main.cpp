#include <iostream>
#include "Paquete.h"
#include "Paqueteria.h"
#include <string>
#include <fstream>

using namespace std;

int main()
{

    Paqueteria *paq=new Paqueteria();

    int opc, id,x;
    string origen, destino;
    float peso;

    do
    {
        cout<<"\tMenu Principal\n"<<endl;
        cout<<"Elija la operacion a realizar en la lista"<<"\n"<<endl;
        cout<<"1.-Insertar."<<"\n"<<"2.-Eliminar"<<"\n"<<"3.-Mostrar"<<"\n"<<"4.-Guardar"<<"\n"<<"5.-Recuperar"<<"\n"<<endl;


        cin>>opc;
        switch(opc)
        {
        case 1:
            {
                cout<<"Inserte ID del producto:"<<endl;
                cin>>id;
                cout<<"Inserte Origen del producto:"<<endl;
                cin>>origen;
                cout<<"Inserte Destino del producto:"<<endl;
                cin>>destino;
                cout<<"Inserte Peso del producto:"<<endl;
                cin>>peso;

                paq->insertar(id,origen,destino,peso);
                break;
            }
        case 2:
            {
                paq->eliminar();
                break;
            }
        case 3:
            {
                paq->mostrar();
                break;
            }
        case 4:
            {
                paq->guardar();
                break;
            }
        case 5:
            {
                paq->recuperar();
                break;
            }
        default:
            cout<<"Opcion inexistente."<<endl;
        }
        cout<<"Volver al Menu?:\n(1)--SI   (2)--NO"<<endl;
        cin>>x;




    }while(x!=2);

    return 0;
}
