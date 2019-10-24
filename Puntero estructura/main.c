#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define A 3
#define TRUE 1
#define FALSE 0

typedef struct
{
    int id;
    int orden;
    char apellido[50];
    int isEmpty;
} sPersona;

void inicializar(sPersona*,int);
void pedirDatos(sPersona*,int cant,int contId);
void mostrar(sPersona*, int cant);
void ordenar(sPersona*,int cant);
void swap(sPersona* a, sPersona* b);
void incrementarId(int* ultimoId);
int searchFree(sPersona* list,int length);
int buscarProximoId(sPersona*,int);
int main()
{
    int contId = 0;
    int opcion;
    incrementarId(&contId);
    sPersona unaPersona[A];
    inicializar(unaPersona,A);
    do
    {
        printf("1.Cargar");
        printf("\n2.Mostrar\n");
        printf("3.Ordenar\n");
        printf("Elija una opcion\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            pedirDatos(unaPersona,A,contId);
            incrementarId(&contId);
            break;
        case 2:
            mostrar(unaPersona,A);
            break;
        case 3:
            ordenar(unaPersona,A);
            mostrar(unaPersona,A);
            break;
        case 4:
            break;
        }
        system("pause");
        system("cls");

    }
    while(opcion!=15);


    return 0;
}
void inicializar(sPersona* array,int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        (array + i) -> isEmpty = 0;
    }
}

int searchFree(sPersona* list,int length)
{
    int i;
    int index = -1;
    for(i = 0; i < length; i++)
    {
        if(list[i].isEmpty == FALSE)
        {
            index = i;
            break;
        }
    }
    return index;
}
int buscarProximoId(sPersona* array,int cant)
{
    int i = 0;
    int id = -1;
    for(i = 0; i < cant; i++)
    {
        if((array + i)->id == -1 )
            {
                id = (array + i)->id;
            }
            return id +i;
    }
}


void pedirDatos(sPersona* unDato,int cant,int contId)
{
    int i;
    int r = -1;

    i = searchFree(unDato,cant);
    if(i != -1)
        {
    printf("\nIngrese orden: ");
    scanf("%d", &(unDato+i)->orden);
    printf("\nIngrese apellido: ");
    fflush(stdin);
    gets((unDato+i)->apellido);
    (unDato + i) -> id = contId;
    printf("\n");
    unDato[i].isEmpty = 1;
        }
}

void mostrar(sPersona* unDato, int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        if(unDato[i].isEmpty != FALSE)
        {
            printf("%d\t\t%d    \t%20s\n",(unDato+i)->id,
                   (unDato+i)->orden,
                   (unDato+i)->apellido);
        }
    }
}
void ordenar(sPersona* vector,int cant)
{
    int i;
    int j;
    for(i = 0 ; i < cant-1; i++)
    {
        for(j = i+1; j < cant; j++)
        {
            if((vector + i)-> orden > (vector + j) -> orden)
            {
                swap(vector + i, vector + j);
            }
        }
    }
}

void swap(sPersona* a, sPersona* b)
{
    sPersona c;
    c = *a;
    *a = *b;
    *b = c;
}

void incrementarId(int* ultimoId)
{
    *ultimoId = *ultimoId +1;

}
