#include <iostream>
using namespace std;

#include "bajomesada.h"


//escribir
bool Agregarbajomesada(){

FILE *Bajomesada;
    Bajomesada=fopen("bajomesada.dat", "ab");
    CargararReg(Bajomesada);
return 1;
}
//leer
int  Mostrarbajomesada(){

FILE *Bajomesada;
    Bajomesada=fopen("bajomesada.dat","rb");
    MostrarReg(Bajomesada);
return 1;
}
////baja logica
bool BajalogicaBajoMesada(){
int cod;
    cout<<"codigo a eliminar: ";
    cin>>cod;
FILE *Bajomesada;
    Bajomesada=fopen("bajomesada.dat","rb+");
int pos=PosicionCodigo(Bajomesada,cod);
    if (pos==-2){cout<<"no se encontro el registro";}
    if (pos==-1){cout<<"no ingreso al registro";}
    if (pos>=0){cout<<"se encontro la posicion: "<<pos<<endl;}
if (!BajaLogica(Bajomesada , pos)){ cout<<"no pudo efectuarse la baja"<<endl;}
else{cout<<GREEN<<"Producto eliminado!"<<WHITE<<endl;
//BakUp();
return 1;}
return 0;
}
//////baja fisica
void BakUp(){
FILE *bak;
FILE *BajoMesada;
    BajoMesada=fopen("bajomesada.dat", "rb");
        if (BajoMesada==NULL){cout<<"archivo bajomesada.dat no abrio";}
    bak=fopen("bajomesada.bak", "wb");
        if (bak==NULL){cout<<"archivo bajomesada.bak no abrio";}
    int escribio;
     Mueble a;
    while (fread(&a,sizeof a,1,BajoMesada)==1){
        a.leereg();
    escribio=fwrite(&a,sizeof a,1,bak);}
        fclose(BajoMesada);
        fclose(bak);
        if (escribio!=0){
    BajoMesada=fopen("bajomesada.dat","wb");
        if (BajoMesada==NULL){cout<<RED<<"error al abrir bajomesada.dat"<<WHITE<<endl;
    system ("pause ");}
    bak=fopen("bajomesada.bak","rb");
        if (bak==NULL){cout<<RED<<"error al abrir bajomesada.bak"<<WHITE<<endl;
    system ("pause ");}
    while (fread(&a,sizeof a,1,bak)==1){
        if (a.getestado()==true){
        a.leereg();
    fwrite(&a,sizeof a,1,BajoMesada);
        }
    }
cout<<GREEN<<"bakup realizado con exito"<<WHITE<<endl;
    fclose(bak);
    fclose(BajoMesada);

}
    else {cout<<RED<<"error al realizar el bakup"<<WHITE<<endl;}

}

/////MODIFICAR PRECIO
bool modificarprecioBajomesada(){
int cod;
    cout<<BLUE<<"codigo a modificar: "<<WHITE<<endl;
    cin>>cod;
FILE *Bajomesada;
    Bajomesada=fopen("bajomesada.dat","rb+");
int pos=PosicionCodigo(Bajomesada,cod);
    if (pos==-2){cout<<RED<<"no se encontro el registro"<<WHITE<<endl;
    system ("pause");
     return 0;}
    if (pos==-1){cout<<RED<<"no ingreso al registro"<<WHITE<<endl;
    system ("pause");
            return 0;}
    if (pos>=0){cout<<GREEN<<"se encontro la posicion: "<<WHITE<<pos<<endl;}
if (!modificadordeprecio(Bajomesada, pos)){ cout<<RED<<"no pudo efectuarse la baja"<<WHITE<<endl;}
else{cout<<GREEN<<"realizado con exito genia!!!!"<<WHITE<<endl;
return 1;}
return 0;
}
//////stock
bool ListarStock(){

int cod;
    cout<<BLUE<<"codigo a listar: "<<WHITE<<endl;
    cin>>cod;
FILE *Bajomesada;
    Bajomesada=fopen("bajomesada.dat","rb");
int pos=PosicionCodigo(Bajomesada,cod);
    if (pos==-2){cout<<RED<<"no se encontro el registro"<<WHITE<<endl;

    return 0;}
    if (pos==-1){cout<<RED<<"no ingreso al registro"<<WHITE<<endl;

     return 0;}
         system ("cls");

    if (pos>=0){cout<<GREEN<<"codigo encontrado "<<WHITE<<endl;}
    if (ListarStockindicado(Bajomesada , pos)){ cout<<GREEN<<"stock mostrado!"<<WHITE<<endl;
    return 1;}
    else {cout<<RED<<"no pudo mostrarse el stock"<<WHITE<<endl;}
return 0;
}
//////modificar stock
bool  modificarstockBajoMesada(){
int cod;
    cout<<BLUE<<"codigo a modificar: "<<WHITE<<endl;
    cin>>cod;
FILE *Bajomesada;
    Bajomesada=fopen("bajomesada.dat","rb+");
int pos=PosicionCodigo2(Bajomesada,cod);
if (pos>=0){return 1;}
return 0;
}
