#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define A 50

void inicializar(int*,int);
void pedirNumero(int* numero,int cant);
void mostrar(int* numero, int cant);
void ordenar(int* vector,int cant);
void swap(int* a, int* b);
int main()
{
    int numero[A];
    inicializar(numero,A);
    pedirNumero(numero,A);
    printf("\n \n");
    mostrar(numero,A);
    ordenar(numero,A);

    return 0;
}
void inicializar(int* array,int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        *(array + i) = -1;
    }
}
void pedirNumero(int* numero,int cant)
{
    int i;
    char respuesta;
    for(i = 0; i < cant ; i++)
    {
        printf("Ingrese numero de orden: ");
        scanf("%d",numero + i);
        printf("Desea continuar(S/N): ");
        respuesta = getche();
        printf("\n");
        if(respuesta == 'n')
        {
            break;
        }
    }
}

void mostrar(int* numero, int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        if(*(numero + i) != -1)
        {
            printf("\n%d\n",*(numero + i));
        }
    }
}
void ordenar(int* vector,int cant)
{
    int i;
    int j;
    for(i = 0 ; i < cant-1; i++)
    {
        for(j = i+1; j < cant; j++)
        {
            if(*(vector + i) > *(vector + j))
            {
                swap(vector + i, vector + j);
            }
        }
    }
}

void swap(int* a, int* b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
