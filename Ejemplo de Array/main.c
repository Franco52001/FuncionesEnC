#include <stdio.h>
#include <stdlib.h>
#define T 5

void iniciarArray(int[],int);
void mostrarArray(int[], int);
int mostrarMax(int[],int);
int mostrarMin(int[],int);
void cargaSecuenciaDelArray(int[],int,char[]); //no puse[] al primer int y eso no me ordenaba los datos ingresados
float damePromedio(int[],int );
void ordenar(int[],int);

int main()
{
    int listadoDeNumeros[T];
    int max;
    int min;
    float promedio;

    iniciarArray(listadoDeNumeros,T);
    cargaSecuenciaDelArray(listadoDeNumeros,T,"Ingrese numero: ");
    max  = mostrarMax(listadoDeNumeros,T);
    min  = mostrarMin(listadoDeNumeros,T);
    promedio = damePromedio(listadoDeNumeros,T);
    ordenar(listadoDeNumeros,T);
    mostrarArray(listadoDeNumeros,T);

    printf("El maximo es : %d",max);
    printf("\nEl minimo es : %d",min);
    printf("\nEl promedio es : %f",promedio);

    return 0;
}

void mostrarArray(int myArray[],int cantidad)
{
    int i;
    for(i = 0; i < cantidad; i++)
    {
        printf("%d\n", myArray[i]);
    }

}
int mostrarMax(int myArray[],int cantidad)
{
    int i;
    int max;
    for(i = 0; i < cantidad; i++)
    {
        if(myArray[i] > max || i == 0)
        {
            max = myArray[i];

        }
    }
    return max;
}
int mostrarMin(int myArray[],int cantidad)
{
    int i;
    int min;
    for(i = 0; i < cantidad; i++)
    {
        if(myArray[i] < min || i == 0)
        {
            min = myArray[i];

        }
    }
    return min;
}

void iniciarArray(int myArray[],int cantidad)
{
    int i;
    for(i = 0; i < cantidad; i++)
    {
        myArray[i] = 0;
    }

}
void cargaSecuenciaDelArray(int myArray[],int cantidad,char mensaje[])
{
    int i;
    for(i = 0; i < cantidad; i++)
    {
        printf(mensaje);
        scanf("%d", &myArray[i]); // no puse [i] a ese array y me daba todo 0
    }

}

float damePromedio(int myArray[],int cantidad)
{
    int i;
    int suma = 0;
    float promedio;
    for(i = 0; i < cantidad; i++)
    {
        suma = suma + myArray[i];
    }
    promedio = suma / cantidad;
    return  promedio;
}
void ordenar(int myArray[],int cantidad)
{
    int i;
    int j;
    int aux;
    for(i = 0 ; i < cantidad -1; i++)
    {
        for(j = i+1 ; j < cantidad; j++)
        {
            if(myArray[i] > myArray[j])
            {
                aux = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = aux;
            }
        }
    }

}
