#include "Persona.h"

void pedirDatos(sPersona lista[],int i,int cant)
{
    printf("Ingrese DNI: ");
    int auxDni;
    scanf("%d",&auxDni);
    while(validarDNI(lista,auxDni,cant) == 1)
    {
        printf("Ya existe el DNI ingrese otro: ");
        scanf("%d",&auxDni);
    }
    lista[i].dni = auxDni;
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(lista[i].nombre);
    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(lista[i].apellido);
    lista[i].estaVacio = 0;
}


void cargarPersonas(sPersona lista[],int cant)
{
    int i;
    int flagEncontro = 0;
    for(i = 0; i < cant; i++)
    {
        if(lista[i].estaVacio == 1)
        {
            pedirDatos(lista,i,cant);
            flagEncontro = 1;
            break;
        }
    }
    if(flagEncontro == 0)
    {
        printf("No hay mas espacio\n");
    }
}

void mostrarlistaPersonas(sPersona lista[],int cant)
{
    int i;
    for(i = 0; i < cant ; i++ )
    {
        if(lista[i].estaVacio == 0)
        {
            printf("DNI: %d\nNombre: %s\nApellido: %s\n",lista[i].dni,lista[i].nombre,lista[i].apellido);
        }
    }
}
void inicializarPersonas(sPersona lista[],int cant)
{
    int i;
    for(i = 0; i < cant ; i++ )
    {
        lista[i].estaVacio = 1;
    }
}
int validarDNI(sPersona lista[],int auxDni,int cant)
{
    int salida = 0;
    int i;
    for(i = 0; i < cant ; i++ )
    {
        if(lista[i].estaVacio == 0 && auxDni == lista[i].dni )
        {
            salida = 1;
        }
    }
    return salida;
}

void ordernarPorDni(sPersona lista[],int cant)
{
    int i;
    int j;
    sPersona aux;
    for(i = 0; i < cant-1 ; i++ )
    {
        for(j = i+1;j < cant; j++)
            {
                if(lista[i].dni < lista[j].dni)
                    {
                        aux = lista[i];
                        lista[i] = lista[j];
                        lista[j] = aux;
                    }
            }
    }
}


