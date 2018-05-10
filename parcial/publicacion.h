#ifndef PUBLICACION_H_INCLUDED
#define PUBLICACION_H_INCLUDED

typedef struct
{
    int idCliente;
    int numeroRubro;
    char textoAviso[64];
    int estado;
    int idAviso;
    //------------
    int isEmpty;
}Aviso;

#endif // PUBLICACION_H_INCLUDED

#include "cliente.h"

int publicacion_init(Aviso* array,int limite);
int publicaicon_alta(Aviso* array,int limite);
int publicacion_altaForzada(Aviso* array,int limite,int idC,int numRubro,char* txtAviso);
int publicacion_mostrarDEB(Aviso* array,int limite);
int publicacion_pausar(Aviso* array,int limite, int id);
int publicaicon_buscarPorId(Aviso* array,int limite, int id);
int publicacion_reanudar(Aviso* array,int limite, int id);
int publicacion_mostrar(Aviso* arrayA,int limiteA, Cliente* arrayC, int limiteC);
