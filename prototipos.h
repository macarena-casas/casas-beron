#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

#include "colores.h"
#include "usuario.h"
#include "muebles.h"
#include "submenuvendedor.h"
#include "submenu.h"

void cargarCadena(char *palabra, int tam);
////cargar y mostrar
bool CargararReg(FILE*reg);
int MostrarReg(FILE*reg);
//////posicion
int PosicionCodigo(FILE *reg,int codigo);
//// baja logica
bool BajaLogica(FILE *reg, int pos);
////cambio de precio
bool modificadordeprecio(FILE *reg, int pos);
//// listar stock
bool ListarStockindicado(FILE *reg, int pos);
//////modificar stock
int PosicionCodigo2(FILE *reg,int codigo);
bool modificadordestock(FILE *reg, int pos);


#endif // PROTOTIPOS_H_INCLUDED
