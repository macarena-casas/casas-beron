#include <cstdio>
#include <cstdlib>

using namespace std;
#include "submenu.h"

int mostrarsubmenu(int seleccionanterior){
        int opc=1;
    while (opc !=9){

    system ("cls");
    cout<<endl<<endl;
    cout <<"\t"<<GREEN<<"***************************"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   INDIQUE LA CATEGORIA"<<GREEN<<"  *"<<endl;
    cout <<"\t"<<"***************************"<<endl;
    cout <<"\t"<<LGREEN<<"*"<<WHITE<<"   1-PLACARES            "<<LGREEN<<"*"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   2-COMODAS             "<<LGREEN<<"*"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   3-MODULARES           "<<LGREEN<<"*"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   4-MESA DE LUZ         "<<LGREEN<<"*"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   5-BAJO MESADA         "<<LGREEN<<"*"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   9-VOLVER AL MENU      "<<LGREEN<<"*"<<endl;
    cout <<"\t"<<"*"<<WHITE<<"   0-CERRAR PROGRAMA     "<<LGREEN<<"*"<<endl;
    cout <<"\t"<<"***************************"<<WHITE<<endl;

    cout <<"OPCION: ";
    cin >>opc;
    system ("cls");
   switch (opc){
case 1:
        {

    if (seleccionanterior==1){
        if(AgregarRoperos()){cout<<GREEN<<"Agregado exitosamente"<<WHITE<<endl; }
        else {cout<<RED<<"fallo la carga"<<WHITE<<endl;}
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
       modificarprecioRoperos();
        system ("pause");
    }

   if (seleccionanterior==4){
      BajalogicaRoperos();

        system ("pause");
    }
break;}
case 2:
       {

    if (seleccionanterior==1){
       if (Agregarcomoda()){cout<<GREEN<<"Agregado exitosamente"<<WHITE<<endl; }
       else {cout<<"fallo la carga"<<endl;};
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
        modificarprecioComoda();
        system ("pause");
    }

    if (seleccionanterior==4){
        BajalogicaComodas();
        system ("pause");
    }


break;}

case 3:
        {


    if (seleccionanterior==1){
       if(AgregarModular()){cout<<GREEN<<"Agregado exitosamente"<<WHITE<<endl; }
       else{cout<<"fallo la carga";}
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
        modificarpreciomodular();
        system ("pause");
    }
   if (seleccionanterior==4){
       BajalogicaModular();
        system ("pause");

    }

break;}
case 4:
        {


    if (seleccionanterior==1){
        if (Agregarmesadeluz()){cout<<GREEN<<"Agregado exitosamente"<<WHITE<<endl; }
        else {cout<<"fallo la carga"<<endl;};
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
       modificarpreciomesadeluz();
        system ("pause");
    }

   if (seleccionanterior==4){
       Bajalogicamesadeluz();
        system ("pause");
}
break;}
case 5:
        {


    if (seleccionanterior==1){
       if (Agregarbajomesada()){cout<<GREEN<<"Agregado exitosamente"<<WHITE<<endl; }
       else {cout<<"fallo la carga"<<endl;};
       system ("pause");
    }
    if (seleccionanterior==2){
        cout<<YELLOW<<"***********************************************"<<endl;
        cout<<"**************"<<WHITE<<"LISTADO DE BAJO MESADA"<<YELLOW<<"***9********"<<endl;
        cout<<"***********************************************"<<WHITE<<endl;
        if (!Mostrarbajomesada()){cout<<"ERROR AL LEER ARCHIVO";}
        system ("pause");
    }
    if (seleccionanterior==3){
      modificarprecioBajomesada();
        system ("pause");
    }

 if (seleccionanterior==4){
      BajalogicaBajoMesada();
        system ("pause");
    }


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

}

}



