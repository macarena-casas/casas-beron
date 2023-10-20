#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

#include "colores.h"
#include "usuario.h"
#include "menujefe.h"
#include "menuvendedor.h"

int main()
{
    int opc=0;
    while (opc !=9){

 system ("cls");
cout<<endl<<"\t"<<BLUE<<"********************************"<<endl;
cout<<"\t"<<"**"<<WHITE<<"  ELIJA LA OPCION DESEADA:  "<<BLUE<<"**"<<endl;
cout<<"\t"<<BLUE<<"********************************"<<endl;
cout<<"\t"<<"**                            **"<<endl;cout<<"\t"<<"**"<<WHITE<<"     1-JEFE/ENCARGADO       "<<BLUE<<"**"<<endl;
cout<<"\t"<<"**                            **"<<endl;
cout<<"\t"<<"**"<<WHITE<<"     2-VENDEDOR             "<<BLUE<<"**"<<endl;
cout<<"\t"<<"**                            **"<<endl;
cout<<"\t"<<"**"<<WHITE<<"     0-SALIR                "<<BLUE<<"**"<<endl;
cout<<"\t"<<"**                            **"<<endl;
cout<<"\t"<<"********************************"<<WHITE<<endl;
cout<<"Opcion: ";
cin>>opc;
   system ("cls");
 usuario a;
 switch (opc){
case 1:
        {
     int codigo;

   cout<<"ingresar codigo id: ";
   cin>>codigo;
   int x= a.compararcodigoid(codigo);
   system ("cls");
   if (x==2){
    a.nombredeusuario(codigo);
    MostrarMenuJefe();
   }
   else{cout<<endl<<endl<<RED<<"ERROR DE ID, USTED NO TIENE ACCESO A ESTA CATEGORIA"<<WHITE<<endl<<endl<<endl;
  system("pause");}
    break;
    }
case 2:
        {
    int codigo;
cout<<"ingresar codigo id: ";
cin>>codigo;
   int x= a.compararcodigoid(codigo);
   system ("cls");
   if (x==1||x==2){
 a.nombredeusuario(codigo);
     MostrarMenuVendedor();
}
   else{cout<<endl<<endl<<RED<<"ERROR DE ID, USTED NO TIENE ACCESO A ESTA CATEGORIA"<<WHITE<<endl<<endl<<endl;
   system("pause");}
    break;}
case 0:
        {
    exit (0);
    break;}
        }
    }
    return 0;
}

