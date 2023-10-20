#include <cstdio>
#include <cstdlib>
using namespace std;
#include "submenuvendedor.h"

void MostrarsubmenuVendedor(int seleccionanterior){

    int opc=1;
    while (opc !=9){

    system ("cls");
    cout<<endl<<endl;
    cout <<"\t"<<MAGENTA<<"***************************"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   INDIQUE LA CATEGORIA"<<MAGENTA<<"  *"<<endl;
    cout <<"\t"<<"***************************"<<endl;
    cout <<"\t"<<ROSE<<"*"<<WHITE<<"   1-PLACARES            "<<ROSE<<"*"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   2-COMODAS             "<<ROSE<<"*"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   3-MODULARES           "<<ROSE<<"*"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   4-MESA DE LUZ         "<<ROSE<<"*"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   5-BAJO MESADA         "<<ROSE<<"*"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   9-VOLVER AL MENU      "<<ROSE<<"*"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   0-CERRAR PROGRAMA     "<<ROSE<<"*"<<endl;
    cout <<"\t"<<"***************************"<<WHITE<<endl;

    cout <<"OPCION: ";
    cin >>opc;
    system ("cls");
switch (opc){
case 1:
        {
    if (seleccionanterior==1){
    ListarstockRoperos();
        system ("pause");
     }
    if (seleccionanterior==2){
        cout<<YELLOW<<"***********************************************"<<endl;
        cout<<"**************"<<WHITE<<"LISTADO DE PLACARES"<<YELLOW<<"**************"<<endl;
        cout<<"***********************************************"<<WHITE<<endl;
       MostrarRoperos();
        system ("pause");
    }
    if (seleccionanterior==3){
    modificarstockRoperos();
    system ("pause");
    }
    if (seleccionanterior==4){
    modificarstockRoperos();
    system ("pause");
    }
break;}
case 2:
       {
    if (seleccionanterior==1){
    ListarStockc();
        system ("pause");
    }
    if (seleccionanterior==2){
        cout<<YELLOW<<"***********************************************"<<endl;
        cout<<"**************"<<WHITE<<"LISTADO DE COMODAS"<<YELLOW<<"***************"<<endl;
        cout<<"***********************************************"<<WHITE<<endl;
    if (!Mostrarcomoda()){cout<<"ERROR AL LEER ARCHIVO";}
    system ("pause");
    }
    if (seleccionanterior==3){
    modificarstockComoda();
    system ("pause");
    }
break;}
case 3:
        {
    if (seleccionanterior==1){
      ListarStockm();
        system ("pause");
    }
    if (seleccionanterior==2){
        cout<<YELLOW<<"***********************************************"<<endl;
        cout<<"**************"<<WHITE<<"LISTADO DE MODULARES"<<YELLOW<<"*************"<<endl;
        cout<<"***********************************************"<<WHITE<<endl;
    if(!MostrarModular()){cout<<"ERROR AL LEER ARCHIVO";}
    system ("pause");
    }
    if (seleccionanterior==3){
    modificarstockModulares();
    system ("pause");
    }
break;}
case 4:
        {
    if (seleccionanterior==1){
       ListarStockml();
        system ("pause");
    }
    if (seleccionanterior==2){
        cout<<YELLOW<<"***********************************************"<<endl;
        cout<<"**************"<<WHITE<<"LISTADO DE MESAS DE LUZ"<<YELLOW<<"**********"<<endl;
        cout<<"***********************************************"<<WHITE<<endl;
    Mostrarmesadeluz();
        system ("pause");
    }
    if (seleccionanterior==3){
    modificarstockMesadeLuz();
    system ("pause");
    }
break;}
case 5:
        {
    if (seleccionanterior==1){
        ListarStock();
        system ("pause");
    }
    if (seleccionanterior==2){
        cout<<YELLOW<<"***********************************************"<<endl;
        cout<<"*************"<<WHITE<<"LISTADO DE BAJO MESADA"<<YELLOW<<"************"<<endl;
        cout<<"***********************************************"<<WHITE<<endl;
    if (!Mostrarbajomesada()){cout<<"ERROR AL LEER ARCHIVO";}
        system ("pause");
    }
    if (seleccionanterior==3){
    modificarstockBajoMesada();
    system ("pause");
    }
break;}
case 0:
        {
exit (0);
    break;}
        }
    }
}



