#include <iostream>
#include <cstdio>
using namespace std;
#include "menuvendedor.h"
#include "menujefe.h"

void MostrarMenuJefe(){
    int opc=1;
    while (opc !=9){

cout<<endl<<endl;

    cout<<YELLOW;
    cout <<"\t"<<"*******************************"<<endl;
    cout <<"\t"<<"*       MENU DE OPCIONES      *"<<endl;
    cout <<"\t"<<"*******************************"<<endl;
    cout<<WHITE;
    cout <<"\t"<<YELLOW<<"*   1-"<<WHITE<<"AGREGAR PRODUCTO        "<<YELLOW<<"*"<<endl;
    cout <<"\t"<<YELLOW<<"*   2-"<<WHITE<<"MOSTRAR PRODUCTOS       "<<YELLOW<<"*"<<endl;
    cout <<"\t"<<YELLOW<<"*   3-"<<WHITE<<"MODIFICAR PRODUCTO      "<<YELLOW<<"*"<<endl;
    cout <<"\t"<<YELLOW<<"*   4-"<<WHITE<<"ELIMINAR PRODUCTO       "<<YELLOW<<"*"<<endl;
    cout <<"\t"<<YELLOW<<"*   5-"<<WHITE<<"REGISTRAR EMPLEADO      "<<YELLOW<<"*"<<endl;
    cout <<"\t"<<YELLOW<<"*   6-"<<WHITE<<"LISTAR EMPLEADOS        "<<YELLOW<<"*"<<endl;
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
    mostrarsubmenu(opc);
    break;}
case 2:
        {
    mostrarsubmenu(opc);
    break;}
case 3:
        {
  mostrarsubmenu(opc);
break;}
case 4:
        {
    mostrarsubmenu(opc);
    break;}
case 5:
        {
  usuario a;

bool x=a.registrarempleado ();
if (x==1){cout<<"agregado con exito"<<endl;}
system("pause");
    break;

}
case 6:
        {
usuario a;
a.listarempleados ();

    system("pause");
    break;
        }
case 9:
        {
  // MostrarsubmenuVendedor(1);
   MostrarsubmenuVendedor(2);
   // MostrarsubmenuVendedor(3);
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
