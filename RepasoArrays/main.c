#include <stdio.h>
#include <stdlib.h>
#define cantidad 3

void mostrarArray(int[],int cant);
void iniciarArray(int[],int cant);
void cargarSecuenciaArray(int[],int cant);
int dameElMaximo(int[],int cant);
int dameElIndice(int[],int cant);
void ordernar(int[],int cant);

int main()
{

    int miArray[cantidad];//miarray es el nombre de la direccion de memoria e indice es la cantidad de espacios que ocupa esa direccion
    int indice;
    int max;

    iniciarArray(miArray,cantidad);
    cargarSecuenciaArray(miArray,cantidad);
    max = dameElMaximo(miArray,cantidad);
    indice = dameElIndice(miArray, cantidad);
    printf("\nel maximo es: %d",max);
    printf("\nel indice maximo es: %d",indice);
    ordernar(miArray,cantidad);
    mostrarArray(miArray,cantidad);



    /*for(indice = 0; indice < cantidad; indice++)//todos los array usan este for nunca cambia,for permite el ingreso de datos y que no los olvide
    {
        miArray[indice] = 0; //array trabaja con muchas variables pero se maneja como si fuera una solo se le agrega los corchetes y el indice
    }

    for(indice = 0; indice < cantidad; indice++)
    {
       printf("\nnumero: %d" ,miArray[indice]);
    }


    for(indice = 0; indice < cantidad; indice++)
    {
       printf("\ningrese numero: " ,miArray[indice]);
       scanf("%d",&miArray[indice]);
    }

    for(indice = 0; indice < cantidad; indice++)
    {
       printf("\nnumero: %d" ,miArray[indice]);
    }
    */

    return 0;
}
void mostrarArray(int parametroArray[],int cant)
{
    int indice;
    for(indice = 0; indice < cant; indice++)
    {
        printf("\nnumero: %d",parametroArray[indice]);
    }
}
void iniciarArray(int parametroArray[],int cant) // esta funcion inicia el valor del array en 0
{
    int indice;
    for(indice = 0; indice < cantidad; indice++)
    {
        parametroArray[indice] = 0;
    }
}
void cargarSecuenciaArray(int parametroArray[],int cant)
{
    int indice;
    for(indice = 0; indice < cantidad; indice++)
    {
        printf("\ningrese numero: ",parametroArray[indice]);
        scanf("%d",&parametroArray[indice]);
    }
}

int dameElMaximo(int parametroArray[],int cant)
{
    int indice;
    int max;
    for(indice = 0; indice < cantidad; indice++)
    {
        if(indice == 0 || parametroArray[indice] > max)
        {
            max = parametroArray[indice];
        }

    }
    return max;
}
int dameElIndice(int parametroArray[],int cant)
{
    int indice;
    int max;
    int maxIn;
    for(indice = 0; indice < cantidad; indice++)
    {
        if(indice == 0 || parametroArray[indice] > max)
        {
            max = parametroArray[indice];
            maxIn = indice;
        }
    }
    return maxIn;
}

void ordernar(int parametroArray[],int cant)
{
    int i;
    int j;
    int aux;

    for(i = 0; i < cantidad; i++)
    {
        for(j = i + 1; j < cantidad; j++)
        {
            if(parametroArray[i] < parametroArray[j])
            {
                aux = parametroArray[i];
                parametroArray[i] = parametroArray[j];
                parametroArray[j] = aux;

            }
        }

    }
}
