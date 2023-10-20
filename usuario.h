#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

class usuario{
private:
    int _Idempleado;
    int _Dni;
    int _categoria;
    char _nombre [20];
    char _apellido [20];
    bool _estado;

public:

    void setidempleado (int idempleado);
    void setdni (int dni);
    void setcategoria (int categoria);
    void setnombre (const char *nombre);
    void setapellido (const char *apellido);
    void setestado (bool estado);

    int getidempleado();
    int getdni();
    int getcategoria();
    const char* getnombre();
    const char* getapellido();
    bool getestado();

    void cargar();
    void mostrar();
        bool registrarempleado ();
        bool listarempleados ();
        int compararcodigoid (int codigo);
        bool nombredeusuario (int codigo);


};

#endif // USUARIO_H_INCLUDED
