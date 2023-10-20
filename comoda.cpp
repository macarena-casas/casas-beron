#include <iostream>
#include "comoda.h"

using namespace std;

//escribir
bool  Agregarcomoda(){

FILE *Comoda;
    Comoda=fopen("comoda.dat", "ab");
    bool escribir=CargararReg(Comoda);
    return escribir;

}
//leer
int  Mostrarcomoda(){

FILE *Comoda;
    Comoda=fopen("comoda.dat","rb");
    MostrarReg(Comoda);
return 1;
}

bool BajalogicaComodas(){
int cod;
    cout<<"codigo a eliminar: ";
    cin>>cod;
 FILE *comoda;
    comoda=fopen("comoda.dat","rb+");
int pos=PosicionCodigo(comoda,cod);
    if (pos==-2){cout<<"no se encontro el registro"<<endl;
    return 0;}
    if (pos==-1){cout<<"no ingreso al registro"<<endl;
    return 0;}
    if (pos>=0){cout<<"se encontro la posicion: "<<pos<<endl;}
if (!BajaLogica(comoda , pos)){ cout<<"no pudo efectuarse la baja"<<endl;}
else{cout<<GREEN<<"Producto eliminado!"<<WHITE<<endl;
BakUpc();
return 1;}
return 0;

}
bool BakUpc(){
FILE *bak;
FILE *Comoda;
    Comoda=fopen("comoda.dat", "rb");
        if (Comoda==NULL){cout<<"archivo comoda.dat no abrio";
         return 0;}
    bak=fopen("comoda.bak", "wb");
        if (bak==NULL){cout<<"archivo comoda.bak no abrio";
         return 0;}
    int escribio;
  Mueble a;
while (fread(&a,sizeof a,1,Comoda)==1){
        a.leereg();
    escribio=fwrite(&a,sizeof a,1,bak);}
        fclose(Comoda);
        fclose(bak);
        if (escribio!=0){

    Comoda=fopen("comoda.dat","wb");
        if (Comoda==NULL){cout<<RED<<"error al abrir comoda.dat"<<WHITE<<endl;
    system ("pause ");}
    bak=fopen("comoda.bak","rb");
        if (bak==NULL){cout<<RED<<"error al abrir comoda.bak"<<WHITE<<endl;
    system ("pause ");}
    while (fread(&a,sizeof a,1,bak)==1){
        if (a.getestado()==true){
       a.leereg();
    fwrite(&a,sizeof a,1,Comoda);
        }
    }
cout<<GREEN<<"bakup realizado con exito"<<WHITE<<endl;
    fclose(bak);
    fclose(Comoda);
    return 1 ;
    }
    else {cout<<RED<<"error al realizar el bakup"<<WHITE<<endl;}
 return 0 ;
}

/////MODIFICAR PRECIO
bool modificarprecioComoda(){
FILE *Comoda;
int cod;
    cout<<BLUE<<"codigo a modificar: "<<WHITE<<endl;
    cin>>cod;
    Comoda=fopen("comoda.dat","rb+");
int pos=PosicionCodigo(Comoda,cod);
    if (pos==-2){cout<<RED<<"no se encontro el registro"<<WHITE<<endl;
    system ("pause");
     return 0;}
    if (pos==-1){cout<<RED<<"no ingreso al registro"<<WHITE<<endl;
    system ("pause");
            return 0;}
    if (pos>=0){cout<<GREEN<<"se encontro la posicion: "<<WHITE<<pos<<endl;}
if (!modificadordeprecio(Comoda , pos)){ cout<<RED<<"no pudo efectuarse la baja"<<WHITE<<endl;}
else{cout<<GREEN<<"realizado con exito genia!!!!"<<WHITE<<endl;
return 1;}

return 0;
}
//////stock
bool ListarStockc(){

int cod;
    cout<<BLUE<<"codigo a listar: "<<WHITE<<endl;
    cin>>cod;
FILE *Comoda;
   Comoda=fopen("comoda.dat","rb");
int pos=PosicionCodigo(Comoda,cod);
    if (pos==-2){cout<<RED<<"no se encontro el registro"<<WHITE<<endl;

    return 0;}
    if (pos==-1){cout<<RED<<"no ingreso al registro"<<WHITE<<endl;

    return 0;}
        system ("cls");

    if (pos>=0){cout<<GREEN<<"codigo encontrado "<<WHITE<<endl;}
    if (ListarStockindicado(Comoda , pos)){ cout<<GREEN<<"stock mostrado!"<<WHITE<<endl;
    return 1;}
    else {cout<<RED<<"no pudo mostrarse el stock"<<WHITE<<endl;
    }
return 0;
}
//////modificar stock
bool  modificarstockComoda(){
int cod;
    cout<<BLUE<<"codigo a modificar: "<<WHITE<<endl;
    cin>>cod;
FILE *Comoda;
    Comoda=fopen("comoda.dat","rb+");
int pos=PosicionCodigo2(Comoda,cod);

    if (pos>=0){return 1;}
    return 0;
}
