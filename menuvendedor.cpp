#include <iostream>
using namespace std;

#include "menuvendedor.h"

void MostrarMenuVendedor(){
    int opc=1;
    while (opc !=9){

cout<<endl<<endl;

    cout<<YELLOW;
    cout <<"\t"<<"*******************************"<<endl;
    cout <<"\t"<<"*       MENU DE OPCIONES      *"<<endl;
    cout <<"\t"<<"*******************************"<<endl;
    cout<<WHITE;
    cout <<"\t"<<YELLOW<<"*   1-"<<WHITE<<"LISTAR STOCK            "<<YELLOW<<"*"<<endl;
    cout <<"\t"<<YELLOW<<"*   2-"<<WHITE<<"MOSTRAR PRODUCTOS       "<<YELLOW<<"*"<<endl;
    cout <<"\t"<<YELLOW<<"*   3-"<<WHITE<<"MODIFICAR STOCK         "<<YELLOW<<"*"<<endl;
    cout <<"\t"<<YELLOW<<"*   9-"<<WHITE<<"VOLVER AL MENU ANTERIOR "<<YELLOW<<"*"<<endl;
    cout <<"\t"<<YELLOW<<"*   0-"<<WHITE<<"SALIR                   "<<YELLOW<<"*"<<endl;
    cout<<YELLOW;
    cout <<"\t"<<"*******************************"<<endl;
    cout<<WHITE;
    cout <<"OPCION: ";
    cin >>opc;
    system ("cls");
switch (opc){
case 1:
        {
    MostrarsubmenuVendedor(opc);
    break;}
case 2:
        {
    MostrarsubmenuVendedor(opc);
    break;}
case 3:
        {
  MostrarsubmenuVendedor(opc);
break;}
case 9:
        {
    break;
        }
case 0:
        {
            exit (0);
    break;
        }

}
    system ("cls");

}
}
