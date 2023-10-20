#include <iostream>
#include <cstdio>
#include <cstdlib>

#include "prototipos.h"

using namespace std;
void cargarCadena(char *palabra, int tam){
    int i = 0;
    fflush(stdin);
    for (i = 0 ; i < tam ; i++ ){
        palabra[i] = cin.get();
        if(palabra[i] == '\n') break;
    }
    palabra[i] = '\0';
    fflush(stdin);
}
bool CargararReg(FILE*reg){
Mueble a;

   if(reg==NULL){return false;}
cout<<"INGRESAR LOS VALORES DEL REGISTRO "<<endl;
   a.cargar();
bool escribio=fwrite(&a,sizeof a,1,reg);
    fclose(reg);
return escribio;
}
//leer

int MostrarReg(FILE *reg){
    Mueble a;
        if (reg==NULL){cout<<RED<<"me equivoqueee"<<WHITE<<endl;
        system ("pause ");
        return 0;}
    while (fread(&a,sizeof a,1,reg)==1){
        a.mostrar();}
        return 1;
}

 ///////para baja logica
int PosicionCodigo(FILE *reg,int codigo){
Mueble a;
int pos=0;
        if (reg==NULL){cout<<RED<<"me equivoqueee"<<WHITE<<endl;
        system ("pause");
        return -1;}
    while (fread(&a,sizeof a,1,reg)==1){
        if (codigo==a.getcodigo()&&a.getestado()==true){
 cout<<"entra en pos de codigo"<<endl;;
        return pos;
        }
        pos++;
    }
        return -2;
}

/////// leer registro en pos encontrada

bool BajaLogica(FILE *reg, int pos){
Mueble a;
    a.setestado(false);
        if(reg==NULL){cout<<RED<<"registro nulo, vuelva a intentar"<<WHITE<<endl;}
    fseek(reg,sizeof a*pos,0);
    fread(&a,sizeof a,1,reg);
cout<<"registro a eliminar: "<<endl;
    a.mostrar();
    cout<<endl;
char opc;
cout<<RED<<"DESEA BORRARLO? (S/N) "<<WHITE;
cin>>opc;
    if(opc=='s'|| opc=='S'){
        a.setestado(false);
///sobreescribir
        if(reg==NULL){cout <<RED<<"no puede leer el registro"<<WHITE<<endl;}
        fseek(reg,sizeof a*pos,0);
        bool escribio=fwrite(&a,sizeof a,1,reg);
        fclose(reg);
        return escribio;
    }
    return 0;
}

//// MODIFICAR PRECIO

bool modificadordeprecio(FILE *reg, int pos){
Mueble a;
    if(reg==NULL){cout<<RED<<"registro nulo, vuelva a intentar"<<WHITE<<endl;}
    fseek(reg,sizeof a*pos,0);
    fread(&a,sizeof a,1,reg);
cout<<"registro a modificar: ";
    a.mostrar();
    cout<<endl;
char opc;
cout<<RED<<"DESEA CAMBIAR EL PRECIO? (S/N) "<<WHITE;
cin>>opc;
    if(opc=='s'|| opc=='S'){
float precio;
        cout<<"ingrese nuevo precio: $";
        cin>>precio;
        a.setcostodelmueble(precio);
        a.setpreciodeventa(precio);
 ///sobreescribir
        if(reg==NULL){cout <<RED<<"no puede leer el registro"<<WHITE<<endl;}
        fseek(reg,sizeof a*pos,0);
        bool escribio=fwrite(&a,sizeof a,1,reg);

        return escribio;
    }
    return false;
}

////listar stock

bool ListarStockindicado(FILE *reg, int pos){
Mueble a;
    if(reg==NULL){cout<<RED<<"registro nulo, vuelva a intentar"<<WHITE<<endl;
    return 0;}
    fseek(reg,sizeof a*pos,0);
    fread(&a,sizeof a,1,reg);
cout<<"stock solicitado: "<<endl;
    a.mostrarstock();
        fclose(reg);
        return 1;
    }

//////posicion y llamado a modif stock
int PosicionCodigo2(FILE *reg,int codigo){
Mueble a;
int pos=0;
    if (reg==NULL){cout<<RED<<"no ingreso al registro"<<WHITE<<endl;
    system ("pause ");
    return -1;}
    while (fread(&a,sizeof a,1,reg)==1){
        if (codigo==a.getcodigo()&&a.getestado()==true){
        if (modificadordestock(reg , pos)){ cout<<GREEN<<"realizado con exito genia!!!!"<<WHITE<<endl;
        fclose(reg);
        return 1;}
   else {cout<<RED<<"la modificacion de stock, no fue efectuada"<<WHITE<<endl;}


        }
        pos++;
    }
    cout<<RED<<"no se encontro el registro"<<WHITE<<endl;
   fclose(reg);
        return -1;
}
////modificador stock
bool modificadordestock(FILE *reg, int pos){
 Mueble a;
    if(reg==NULL){cout<<RED<<"registro nulo, vuelva a intentar"<<WHITE<<endl;
    return 0;}
    fseek(reg,sizeof a*pos,0);
    fread(&a,sizeof a,1,reg);
cout<<"registro a modificar: ";

   a.mostrarstock();
    cout<<endl;
char opc;
cout<<RED<<"DESEA CAMBIAR EL STOCK? (S/N) "<<WHITE;
cin>>opc;
    if(opc=='s'|| opc=='S'){
int seleccionado;
int cantidad;
cout<<"1-"<<a.getcolor1()<<endl;
cout<<"2-"<<a.getcolor2()<<endl;
cout<<"3-"<<a.getcolor3()<<endl;
cout<<"4-"<<"los tres. "<<endl;
cout<<"indique el color a modificar: ";
cin>>seleccionado;
        cout<<"ingrese valor a descontar: ";
        cin>>cantidad;
        if (seleccionado==1){a.setcantidad1(a.getcantidad1()-cantidad);}
        if (seleccionado==2){a.setcantidad2(a.getcantidad2()-cantidad);}
        if (seleccionado==3){a.setcantidad3(a.getcantidad3()-cantidad);}
 if (seleccionado==4){int cantidad2,cantidad3;
        cout<<"ingrese valor a descontar: ";
        cin>>cantidad2;
        cout<<"ingrese valor a descontar: ";
    cin>>cantidad3;
    a.setcantidad(a.getcantidad1()-cantidad,a.getcantidad2()-cantidad2,a.getcantidad3()-cantidad3);
        }
 ///sobreescribir
        if(reg==NULL){cout <<RED<<"no puede leer el registro"<<WHITE<<endl;}
        fseek(reg,sizeof a*pos,0);
        bool escribio=fwrite(&a,sizeof a,1,reg);
        fclose(reg);
        return escribio;
    }
    return false;
}


