#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "utn.h"
#include "cliente.h"
#include "publicacion.h"
#define LEN_CLIENTES 10
#define LEN_AVISOS 20

int main()
{
    Cliente listaClientes[LEN_CLIENTES];
    Aviso listaAvisos[LEN_AVISOS];
    int menu;
    int auxiliarId;

    cliente_init(listaClientes,LEN_CLIENTES);
    publicacion_init(listaAvisos,LEN_AVISOS);

    cliente_altaForzada(listaClientes,LEN_CLIENTES,"Nicolas","Sande", 27379541926, 1);
    publicacion_altaForzada(listaAvisos,LEN_AVISOS, 0 , 0 ,"bebida");

    do
    {
        getValidInt("\n\n1.Alta cliente\n2.Modificar cliente\n3.Baja cliente\n4.Publicar\n5.Pausar publicacion\n6.Reanudar publicacion\n7.Imprimir clientes\n8.Imprimir publicaciones\n0.Salir\n","\nNo valida\n",&menu,0,35,1);
        switch(menu)
        {
            case 1:
                cliente_alta(listaClientes,LEN_CLIENTES);
                break;
            case 2:
                getValidInt("ID de cliente?","\nID ivalido\n",&auxiliarId,0,200,2);
                cliente_modificacion(listaClientes,LEN_CLIENTES, auxiliarId);
                break;
            case 3:
                getValidInt("ID de cliente?","\nNumero valida\n",&auxiliarId,0,200,2);
                cliente_baja(listaClientes,LEN_CLIENTES, auxiliarId);
                break;
            case 4:
                publicaicon_alta(listaAvisos,LEN_AVISOS);
                break;
            case 5:
                getValidInt("ID de publicacion?","\nID ivalido\n",&auxiliarId,0,200,2);
                publicacion_pausar(listaAvisos,LEN_AVISOS, auxiliarId);
                break;
            case 6:
                getValidInt("ID de publicacion?","\nID ivalido\n",&auxiliarId,0,200,2);
                publicacion_reanudar(listaAvisos,LEN_AVISOS, auxiliarId);
                break;
            case 7:
                cliente_mostrar(listaClientes,LEN_CLIENTES);
                break;
            case 8:
                publicacion_mostrar(listaAvisos,LEN_AVISOS,listaClientes,LEN_CLIENTES);
                break;
            case 9:
                //listar_mostar100oMenos(array,QTY);
                break;
            case 10:
                //listar_superaPromedio(array,QTY);
                break;
            case 33:
                cliente_mostrarDEB(listaClientes,LEN_CLIENTES);
                break;
            case 34:
                publicacion_mostrarDEB(listaAvisos,LEN_CLIENTES);
                break;


        }

    }while(menu != 0);


    return 0;
}
