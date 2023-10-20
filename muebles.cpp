#include <iostream>
#include <cstring>
#include <cstdio>
#include "muebles.h"


using namespace std;


Mueble::Mueble(){
}

//seters
    void Mueble::setcategoria (int categoria){_categoria=categoria;}
    void Mueble::setcodigo (int codigo){_codigo=codigo;}
    void Mueble::setarticulo (const char *articulo){strcpy(_articulo,articulo);}
    void Mueble::setancho (float ancho){_ancho=ancho;}
    void Mueble::setalto (float alto){_alto=alto;}
    void Mueble::setprofundidad (float profundidad){_profundidad=profundidad;}
    void Mueble::setcolor (string c1, string c2, string c3){_color[0]=c1,_color[1]=c2, _color[2]=c3;}
    void Mueble::setdescripcion (const char *descripcion){strcpy(_descripcion,descripcion);}
    void Mueble::setcostodelmueble(float costo){_costodelmueble=costo;}
    void Mueble::setpreciodeventa (float _costodelmueble){_preciodeventa= _costodelmueble*1.4;}
    void Mueble::setestado (bool e){_estado=e;}
    void Mueble::setcantidad (int a, int b, int c){_cantidades[0]=a,_cantidades[1]=b,_cantidades[2]=c;}
    void Mueble::setcantidad1 (int a){_cantidades[0]=a;}
    void Mueble::setcantidad2 (int b){_cantidades[1]=b;}
    void Mueble::setcantidad3 (int c){_cantidades[2]=c;}

    //geters
    int Mueble::getcategoria(){return _categoria;}
    int Mueble::getcodigo(){return _codigo;}
    const char* Mueble::getarticulo(){return _articulo;}
    float Mueble::getancho(){return _ancho;}
    float Mueble::getalto(){return _alto;}
    float Mueble::getprofundidad(){return _profundidad;}
    string Mueble::getcolor1(){return  _color[0]; }
    string Mueble::getcolor2(){return  _color[1];}
    string Mueble::getcolor3(){return  _color[2];}
    const char* Mueble::getdescripcion(){return _descripcion;}
    float Mueble::getcostodelmueble(){return _costodelmueble;}
    float Mueble::getpreciodeventa(){return _preciodeventa;}
    bool Mueble::getestado(){return _estado;}
    int Mueble::getcantidad1(){return _cantidades[0];}
    int Mueble::getcantidad2(){return _cantidades[1];}
    int Mueble::getcantidad3(){return _cantidades[2];}

    //otras funciones

    void Mueble::cargar(){
    cout<<"categoria: ";
    cin>>_categoria;
     cout<<"codigo del mueble: ";
    cin>>_codigo;
    cout<<"nombre del articulo: ";
    cargarCadena (_articulo,19);
    cout<<"ancho: ";
    cin>>_ancho;
    cout<<"altura: ";
    cin>>_alto;
    cout<<"profundidad: ";
    cin>>_profundidad;
    cout<<"color: ";
    cin>>_color[0];
    cout<<"stock del color: ";
    cin>>_cantidades[0];
    cout<<"color: ";
    cin>>_color[1];
    cout<<"stock del color: ";
    cin>>_cantidades[1];
    cout<<"color: ";
    cin>>_color[2];
    cout<<"stock del color: ";
    cin>>_cantidades[2];
    cout <<"descripcion: ";
    cargarCadena (_descripcion,49);
    cout<<"costo del mueble: $";
    cin>>_costodelmueble;
    setpreciodeventa(_costodelmueble);
    _estado=true;

cout<<endl;
    }
    //mostrar
    void Mueble::mostrar(){

if (_estado==true){
 cout<<"Categoria del Mueble: "<<getcategoria()<<endl;
 cout<<"Codigo del Mueble: "<<getcodigo()<<endl;
 cout<<"Articulo: "<<getarticulo()<<endl;
 cout<<"Medidas: Ancho-"<<getancho()<<"cm. Alto-"<<getalto()<<"cm. Profundidad-"<<getprofundidad()<<"cm."<<endl;
 cout<<"Color "<<getcolor1()<<": "<<getcantidad1()<<endl;
 cout<<"Color "<<getcolor2()<<": "<<getcantidad2()<<endl;
 cout<<"Color "<<getcolor3()<<": "<<getcantidad3()<<endl;

cout<<"Descripcion: "<<getdescripcion()<<endl;
 cout<<"costo de mueble: $"<<getcostodelmueble()<<endl;
 cout<<"precio de venta: $"<<getpreciodeventa()<<endl;
 cout<<endl<<endl;
        }


 }
///leer
    void Mueble::leereg(){

if (_estado==true){
getcategoria();
getcodigo();
getarticulo();
getancho();
getalto();
getprofundidad();
getcolor1();
getcolor2();
getcolor3();
getdescripcion();
getcostodelmueble();
getpreciodeventa();
getcantidad1();
getcantidad2();
getcantidad3();
 cout<<endl<<endl;
        }

 }


 void Mueble::mostrarstock(){
 if (_estado==true){

 cout<<"Codigo del Mueble: "<<getcodigo()<<endl;
 cout<<"Articulo: "<<getarticulo()<<endl;
 cout<<"Color "<<getcolor1()<<": "<<getcantidad1()<<endl;
 cout<<"Color "<<getcolor2()<<": "<<getcantidad2()<<endl;
 cout<<"Color "<<getcolor3()<<": "<<getcantidad3()<<endl;

 cout<<endl<<endl;
 }
 }
