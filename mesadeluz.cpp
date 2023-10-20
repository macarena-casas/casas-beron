#include <iostream>
#include "mesadeluz.h"
#include "colores.h"

using namespace std;

//escribir
bool  Agregarmesadeluz(){

FILE *Mesadeluz;

    Mesadeluz=fopen("mesadeluz.dat", "ab");
    bool escribir=CargararReg(Mesadeluz);
    return escribir;

}
//leer
int Mostrarmesadeluz(){
FILE *Mesadeluz;
    Mesadeluz=fopen("mesadeluz.dat","rb");
    MostrarReg(Mesadeluz);
return 1;
}
//////
bool  Bajalogicamesadeluz(){

int cod;
    cout<<"codigo a eliminar: ";
    cin>>cod;
FILE *Mesadeluz;
    Mesadeluz=fopen("mesadeluz.dat","rb+");
int pos=PosicionCodigo(Mesadeluz,cod);
    if (pos==-2){cout<<"no se encontro el registro";}
    if (pos==-1){cout<<"no ingreso al registro";}
    if (pos>=0){cout<<"se encontro la posicion: "<<pos<<endl;}
if (!BajaLogica(Mesadeluz, pos)){ cout<<"no pudo efectuarse la baja"<<endl;}
else{cout<<GREEN<<"Producto eliminado!"<<WHITE<<endl;
//BakUpml();
return 1;}
return 0;
}
///////baja fisica
void  BakUpml(){
FILE *bak;
FILE *Mesadeluz;
    Mesadeluz=fopen("mesadeluz.dat", "rb");
        if (Mesadeluz==NULL){cout<<"archivo mesadeluz.dat no abrio";}
    bak=fopen("mesadeluz.bak", "wb");
        if (bak==NULL){cout<<"archivo mesadeluz.bak no abrio";}
    int escribio;
     Mueble a;
while (fread(&a,sizeof a,1,Mesadeluz)==1){
        a.leereg();
    escribio=fwrite(&a,sizeof a,1,bak);}
        fclose(Mesadeluz);
        fclose(bak);
        if (escribio!=0){

    Mesadeluz=fopen("mesadeluz.dat","wb");
        if (Mesadeluz==NULL){cout<<RED<<"error al abrir mesadeluz.dat"<<WHITE<<endl;
        system ("pause ");}
    bak=fopen("mesadeluz.bak","rb");
        if (bak==NULL){cout<<RED<<"error al abrir mesadeluz.bak"<<WHITE<<endl;
        system ("pause ");}
    while (fread(&a,sizeof a,1,bak)==1){
        if (a.getestado()==true){
        a.leereg();
    fwrite(&a,sizeof a,1,Mesadeluz);
        }
    }
cout<<GREEN<<"bakup realizado con exito"<<WHITE<<endl;
    fclose(bak);
    fclose(Mesadeluz);
}
    else {cout<<RED<<"error al realizar el bakup"<<WHITE<<endl;}

}

/////MODIFICAR PRECIO
bool  modificarpreciomesadeluz(){
int cod;
    cout<<BLUE<<"codigo a modificar: "<<WHITE<<endl;
    cin>>cod;
FILE *Mesadeluz;
    Mesadeluz=fopen("mesadeluz.dat","rb+");
int pos=PosicionCodigo(Mesadeluz,cod);
    if (pos==-2){cout<<RED<<"no se encontro el registro"<<WHITE<<endl;
    system ("pause");
     return 0;}
    if (pos==-1){cout<<RED<<"no ingreso al registro"<<WHITE<<endl;
    system ("pause");
            return 0;}
    if (pos>=0){cout<<GREEN<<"se encontro la posicion: "<<WHITE<<pos<<endl;}
if (!modificadordeprecio(Mesadeluz, pos)){ cout<<RED<<"no pudo efectuarse la baja"<<WHITE<<endl;}
else{cout<<GREEN<<"realizado con exito genia!!!!"<<WHITE<<endl;}


}
//////stock
bool ListarStockml(){

int cod;
    cout<<BLUE<<"codigo a listar: "<<WHITE<<endl;
    cin>>cod;
FILE *Mesadeluz;
    Mesadeluz=fopen("mesadeluz.dat","rb");
int pos=PosicionCodigo(Mesadeluz,cod);
    if (pos==-2){cout<<RED<<"no se encontro el registro"<<WHITE<<endl;

    return 0;}
    if (pos==-1){cout<<RED<<"no ingreso al registro"<<WHITE<<endl;

    return 0;}
        system ("cls");

    if (pos>=0){cout<<GREEN<<"codigo encontrado "<<WHITE<<endl;}
    if (ListarStockindicado(Mesadeluz , pos)){ cout<<GREEN<<"stock mostrado!"<<WHITE<<endl;}
    else {cout<<RED<<"no pudo mostrarse el stock"<<WHITE<<endl;
    }

}
//////modificar stock
bool  modificarstockMesadeLuz(){
int cod;
    cout<<BLUE<<"codigo a modificar: "<<WHITE<<endl;
    cin>>cod;
FILE *MesadeLuz;
    MesadeLuz=fopen("mesadeluz.dat","rb+");
int pos=PosicionCodigo2(MesadeLuz,cod);
    if (pos==-1){return 0;}

    if (pos>=0){return 1;}
}
