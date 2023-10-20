#include <iostream>
#include "modulares.h"
#include "colores.h"
using namespace std;

//escribir
bool AgregarModular(){

FILE *Modular;
    Modular=fopen("modulares.dat", "ab");
    bool escribir= CargararReg(Modular);
    return escribir;

    }

int  MostrarModular(){

FILE *Modular;
    Modular=fopen("modulares.dat","rb");
    MostrarReg(Modular);
return 1;
}

////baja logica
bool  BajalogicaModular(){
int cod;
    cout<<"codigo a eliminar: ";
    cin>>cod;
FILE *Modular;
    Modular=fopen("modulares.dat","rb+");
int pos=PosicionCodigo(Modular,cod);
    if (pos==-2){cout<<"no se encontro el registro"<<endl;
    return 0;}
    if (pos==-1){cout<<"no ingreso al registro"<<endl;
    return 0;}
    if (pos>=0){cout<<"se encontro la posicion: "<<pos<<endl;}
if (!BajaLogica(Modular, pos)){ cout<<"no pudo efectuarse la baja"<<endl;}
else{cout<<GREEN<<"Producto eliminado!"<<WHITE<<endl;
//BakUpm();
}
}

void  BakUpm(){
FILE *bak;
FILE *Modulares;
    Modulares=fopen("modulares.dat", "rb");
        if (Modulares==NULL){cout<<"archivo modulares.dat no abrio";}
    bak=fopen("modulares.bak", "wb");
        if (bak==NULL){cout<<"archivo modulares.bak no abrio";}
int escribio;
     Mueble a;
while (fread(&a,sizeof a,1,Modulares)==1){
        a.leereg();
    escribio=fwrite(&a,sizeof a,1,bak);}
     fclose(Modulares);
        fclose(bak);
        if (escribio!=0){

    Modulares=fopen("modulares.dat","wb");
        if (Modulares==NULL){cout<<RED<<"error al abrir modulares.dat"<<WHITE<<endl;
        system ("pause ");}
    bak=fopen("modulares.bak","rb");
        if (bak==NULL){cout<<RED<<"error al abrir modulares.bak"<<WHITE<<endl;
        system ("pause ");}
    while (fread(&a,sizeof a,1,bak)==1){
        if (a.getestado()==true){
        a.leereg();
    fwrite(&a,sizeof a,1,Modulares);}
    }
cout<<GREEN<<"bakup realizado con exito"<<WHITE<<endl;
        fclose(bak);
        fclose(Modulares);}
        else {cout<<RED<<"error al realizar el bakup"<<WHITE<<endl;}
}

/////MODIFICAR PRECIO
bool  modificarpreciomodular(){
int cod;
    cout<<BLUE<<"codigo a modificar: "<<WHITE<<endl;
    cin>>cod;
FILE *Modular;
    Modular=fopen("modulares.dat","rb+");
int pos=PosicionCodigo(Modular,cod);
    if (pos==-2){cout<<RED<<"no se encontro el registro"<<WHITE<<endl;
    system ("pause");
     return 0;}
    if (pos==-1){cout<<RED<<"no ingreso al registro"<<WHITE<<endl;
    system ("pause");
            return 0;}
    if (pos>=0){cout<<GREEN<<"se encontro la posicion: "<<WHITE<<pos<<endl;}
if (!modificadordeprecio(Modular , pos)){ cout<<RED<<"no pudo efectuarse la baja"<<WHITE<<endl;}
else{cout<<GREEN<<"realizado con exito genia!!!!"<<WHITE<<endl;}
}

//////stock
bool ListarStockm(){
int cod;
    cout<<BLUE<<"codigo a listar: "<<WHITE<<endl;
    cin>>cod;
FILE *Modular;
    Modular=fopen("modulares.dat","rb");
int pos=PosicionCodigo(Modular,cod);
    if (pos==-2){cout<<RED<<"no se encontro el registro"<<WHITE<<endl;
    return 0;}
    if (pos==-1){cout<<RED<<"no ingreso al registro"<<WHITE<<endl;
    return 0;}
    system ("cls");
    if (pos>=0){cout<<GREEN<<"codigo encontrado "<<WHITE<<endl;}
    if (ListarStockindicado(Modular , pos)){ cout<<GREEN<<"stock mostrado!"<<WHITE<<endl;}
    else {cout<<RED<<"no pudo mostrarse el stock"<<WHITE<<endl;
    }
}
//////modificar stock
bool  modificarstockModulares(){
int cod;
    cout<<BLUE<<"codigo a modificar: "<<WHITE<<endl;
    cin>>cod;
FILE *Modulares;
   Modulares=fopen("modulares.dat","rb+");
int pos=PosicionCodigo2(Modulares,cod);
    if (pos==-1){return 0;}
    if (pos>=0){return 1;}
}
