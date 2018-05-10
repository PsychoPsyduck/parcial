#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct
{
    char nombre[50];
    char apellido[50];
    int cuit;
    int idCliente;
    //------------
    int avisoActivo;
    int isEmpty;
}Cliente;

#endif // CLIENTE_H_INCLUDED

int cliente_init(Cliente* array,int limite);
int cliente_alta(Cliente* array,int limite);
int cliente_modificacion(Cliente* array,int limite, int id);
int cliente_buscarPorId(Cliente* array,int limite, int id);
int cliente_baja(Cliente* array,int limite, int id);
int cliente_mostrarDEB(Cliente* array,int limite);
int cliente_altaForzada(Cliente* array,int limite,char* nombre,char* apellido, int cuit, int avisoActivo);
int cliente_mostrar(Cliente* array,int limite);
