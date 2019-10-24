#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define A 50

void inicializar(float*,int);
void pedirNumero(float* numero,int cant);
void mostrar(float* numero, int cant);
void ordenar(float* vector,int cant);
void swap(float* a, float* b);
void incrementarId(int* ultimoId);
int main()
{
    float numero[A];
    inicializar(numero,A);
    pedirNumero(numero,A);
    printf("\n");
    mostrar(numero,A);
    ordenar(numero,A);

    return 0;
}
void inicializar(float* array,int cant)
{
    int i;
    for(i = 0; i < cant; i++)
        {
            *(array + i) = -1;
        }
}
void pedirNumero(float* numero,int cant)
{
    int i;
    char respuesta;
    int contId;
    for(i = 0; i < cant ; i++)
    {
        incrementarId(&contId)
        printf("Ingrese numero: ");
        scanf("%f",numero + i);
        printf("Desea continuar(S/N): ");
        respuesta = getche();
        printf("\n");
        if(respuesta == 'n')
        {
            break;
        }
    }
}

void mostrar(float* numero, int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        if(*(numero + i) != -1)
        {
        printf("\n%f\n",*(numero + i));
        }
    }
}
void ordenar(float* vector,int cant)
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

void swap(float* a, float* b)
{
    float c;
    c = *a;
    *a = *b;
    *b = c;
}

void incrementarId(int* ultimoId)
{
    *ultimoId = *ultimoId +1;

}
