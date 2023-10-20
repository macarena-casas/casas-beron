#include <iostream>
#include <cstring>
using namespace std;
#include "colores.h"

#include "usuario.h"

    void usuario::setidempleado (int idempleado){_Idempleado=idempleado;}
    void usuario::setdni (int dni){_Dni=dni;}
    void usuario::setcategoria (int categoria){_categoria=categoria;}
    void usuario::setnombre (const char *nombre){strcpy(_nombre,nombre);}
    void usuario::setapellido (const char *apellido){strcpy(_apellido,apellido);}

    int usuario::getidempleado(){return _Idempleado;}
    int usuario::getdni(){return _Dni;}
    int usuario::getcategoria(){return _categoria;}
    const char* usuario::getnombre(){return _nombre;}
    const char* usuario::getapellido(){return _apellido;}

    void usuario::cargar(){

       cout<<"id del empleado: ";
       cin>>_Idempleado;
       cout<<"categoria 1-vendedor, 2-encargado: ";
       cin>>_categoria;
       cout<<"Dni del empleado: ";
       cin>>_Dni;
       cout<<"nombre del empleado: ";
       cin>>_nombre;
       cout<<"apellido del empleado: ";
       cin>>_apellido;
       _estado=true;

    }
void usuario::mostrar(){
        if (_estado==true){
    cout<<"id del empleado: ";
    cout<<getidempleado()<<endl;
    cout<<"categoria : ";
        if (getcategoria()==1){cout<<"1-vendedor"<<endl;}
        if(getcategoria()==2){cout<<"2-encargado"<<endl;}
    cout<<"Dni del empleado: ";
    cout<<getdni() <<endl;
    cout<<"nombre del empleado: ";
    cout<<getnombre() <<endl;
    cout<<"apellido del empleado: ";
    cout<<getapellido() <<endl;
    cout<<endl;
    }
}

bool usuario::registrarempleado (){
    usuario a;
    FILE *reg;
    reg=fopen("empleados.dat","ab");
    if (reg==NULL){ cout<<"no se pudo acceder al registro empleados.dat";
    return 0;}
    a.cargar();
    fwrite (&a, sizeof a,1,reg);
    fclose(reg);
    return 1;

}
bool usuario::listarempleados (){
    usuario a;
    FILE *reg;
    reg=fopen("empleados.dat","rb");
    if (reg==NULL){ cout<<"no se pudo acceder al registro empleados.dat";
    return 0;}
    while (fread (&a, sizeof a,1,reg)==1){

    a.mostrar();

    }
    fclose(reg);
    return 1;

}
int usuario::compararcodigoid (int codigo){
    usuario a;
    FILE *reg;
    reg=fopen("empleados.dat","rb");
    if (reg==NULL){ cout<<"no se pudo acceder al registro empleados.dat";
    return 0;}
    while (fread (&a, sizeof a,1,reg)==1){

if (codigo==a.getidempleado()){

    return a.getcategoria();
}

    }
    fclose(reg);
    return 0;

}
bool  usuario::nombredeusuario (int codigo){
    usuario a;
    FILE *reg;
    reg=fopen("empleados.dat","rb");
    if (reg==NULL){ cout<<"no se pudo acceder al registro empleados.dat";
    return 0;}
    while (fread (&a, sizeof a,1,reg)==1){

if (codigo==a.getidempleado()){

cout<<endl<<GREEN<<"BIENVENIDO: "<<a.getnombre()<<", "<<a.getapellido();

}

    }
    fclose(reg);
    return 0;

}
