#ifndef MUEBLES_H_INCLUDED
#define MUEBLES_H_INCLUDED

#include <iostream>

#include "prototipos.h"

class Mueble{
private:
  int _categoria;
  int _codigo;
  char _articulo [20];
  float _ancho;
  float _alto;
  float _profundidad;
  std:: string  _color[3];
  char _descripcion [50];
  float _costodelmueble;
  float _preciodeventa;
  bool _estado;
  int _cantidades[3]={};
public:
    Mueble();

    //seters
    void setcategoria (int categoria);
    void setcodigo (int codigo);
    void setarticulo (const char *articulo);
    void setancho (float ancho);
    void setalto (float alto);
    void setprofundidad (float profundidad);
    void setcolor (std::string c1,std::string c2,std::string c3);
    void setdescripcion (const char *descripcion);
    void setcostodelmueble (float costo);
    void setpreciodeventa (float costo);
    void setestado (bool e);
    void setcantidad (int a, int b, int c);
    void setcantidad1 (int a);
    void setcantidad2 (int b);
    void setcantidad3 (int c);
    //geters
    int getcategoria();
    int getcodigo();
    const char* getarticulo();
    float getancho();
    float getalto();
    float getprofundidad();
    std::string getcolor1();
    std::string getcolor2();
    std::string getcolor3();
    const char* getdescripcion();
    float getcostodelmueble ();
    float getpreciodeventa();
    bool getestado();
    int getcantidad1();
    int getcantidad2();
    int getcantidad3();
    //otras

    void cargar();
    void mostrar();
    void leereg();
    void mostrarstock();


};

#endif // MUEBLES_H_INCLUDED
