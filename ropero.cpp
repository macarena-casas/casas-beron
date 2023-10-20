#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
#include "ropero.h"

//escribir
bool AgregarRoperos(){

FILE *Roperos;
    Roperos=fopen("roperos.dat", "ab");
    bool escribio= CargararReg(Roperos);
    return escribio;
    }

int MostrarRoperos(){

FILE *Roperos;
    Roperos=fopen("roperos.dat","rb");
    MostrarReg(Roperos);
return 1;
}
////baja logica
bool  BajalogicaRoperos(){
int cod;
    cout<<BLUE<<"codigo a eliminar: "<<WHITE<<endl;
    cin>>cod;
FILE *Roperos;
    Roperos=fopen("roperos.dat","rb+");
int pos=PosicionCodigo(Roperos,cod);
    if (pos==-2){cout<<RED<<"no se encontro el registro"<<WHITE<<endl;
    system ("pause");
    }
    if (pos==-1){cout<<RED<<"no ingreso al registro"<<WHITE<<endl;
    system ("pause");
   }
if (pos>=0){cout<<GREEN<<"se encontro la posicion: "<<WHITE<<pos<<endl;}
if (!BajaLogica(Roperos , pos)){ cout<<RED<<"no pudo efectuarse la baja"<<WHITE<<endl;}
else{cout<<GREEN<<"Producto eliminado!"<<WHITE<<endl;
BakUpr();
return 1;}
return 0 ;
}
///baja fisica
int  BakUpr(){
FILE *bak;
FILE *Roperos;
    Roperos=fopen("roperos.dat", "rb");
        if (Roperos==NULL){cout<<"archivo roperos.dat no abrio";}
    bak=fopen("roperos.bak", "wb");
        if (bak==NULL){cout<<"archivo roperos.bak no abrio";}
    int escribio;
    Mueble a;
    while (fread(&a,sizeof a,1,Roperos)==1){
        a.leereg();
    escribio=fwrite(&a,sizeof a,1,bak);}
        fclose(Roperos);
        fclose(bak);
        if (escribio!=0){
    Roperos=fopen("roperos.dat","wb");
        if (Roperos==NULL){cout<<RED<<"error al abrir roperos.dat"<<WHITE<<endl;
        system ("pause ");
        return 0;}
    bak=fopen("roperos.bak","rb");
        if (bak==NULL){cout<<RED<<"error al abrir roperos.bak"<<WHITE<<endl;
        system ("pause ");
        return 0;}
    while (fread(&a,sizeof a,1,bak)==1){
        if (a.getestado()==true){
        a.leereg();
    fwrite(&a,sizeof a,1,Roperos);
        }
    }
cout<<GREEN<<"bakup realizado con exito"<<WHITE<<endl;
        fclose(bak);
        fclose(Roperos);
        return 1;
}
else {cout<<RED<<"error al realizar el bakup"<<WHITE<<endl;}
fclose(bak);
fclose(Roperos);
return 0;
}

/////MODIFICAR PRECIO
bool  modificarprecioRoperos(){
int cod;
    cout<<BLUE<<"codigo a modificar: "<<WHITE<<endl;
    cin>>cod;
FILE *Roperos;
    Roperos=fopen("roperos.dat","rb+");
int pos=PosicionCodigo(Roperos,cod);
    if (pos==-2){cout<<RED<<"no se encontro el registro"<<WHITE<<endl;
    system ("pause");
     return 0;}
    if (pos==-1){cout<<RED<<"no ingreso al registro"<<WHITE<<endl;
    system ("pause");
            return 0;}
    if (pos>=0){cout<<GREEN<<"codigo encontrado. "<<WHITE<<endl;}
    if (modificadordeprecio(Roperos , pos)){ cout<<GREEN<<"realizado con exito genia!!!!"<<WHITE<<endl;}
    else {cout<<RED<<"la modificacion de precio, no fue efectuada"<<WHITE<<endl;
    }
    return 1;
}

//////stock
    bool ListarstockRoperos(){
    int cod;
    FILE *Roperos;
    Roperos=fopen("roperos.dat","rb+");
    if (Roperos==NULL){cout<<"error al abrir roperos.dat"<<endl;
    return 0;}
    cout<<BLUE<<"codigo a mostrar: "<<WHITE<<endl;
    cin>>cod;
    int pos=PosicionCodigo(Roperos,cod);
    if (pos==-2){cout<<RED<<"no se encontro el registro"<<WHITE<<endl;
    system ("pause");
     return 0;}
    if (pos==-1){cout<<RED<<"no ingreso al registro"<<WHITE<<endl;
    system ("pause");
            return 0;}
    if (pos>=0){cout<<GREEN<<"codigo encontrado. "<<WHITE<<endl;}
    if (ListarStockindicado(Roperos , pos)){ cout<<GREEN<<"stock mostrado!!!!"<<WHITE<<endl;
    fclose(Roperos);
    return 1;}
    else {cout<<RED<<"no se pudo mostrar el stock"<<WHITE<<endl;}
    fclose(Roperos);
    return 0;
    }

//////modificar stock
bool  modificarstockRoperos(){

int cod;
    cout<<BLUE<<"codigo a modificar: "<<WHITE<<endl;
    cin>>cod;
FILE *Roperos;
    Roperos=fopen("roperos.dat","rb+");
int pos=PosicionCodigo2(Roperos,cod);
 if (pos>=0){return 1;}
 return 0;
}
