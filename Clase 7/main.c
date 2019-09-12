#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void cargarConDatos(int[], int);
void cargarnombre(char[] [50], int);
int darMaximo(int[],int);
int elIndice(int[],int );
void elNombre(char [],int [],int);
int main()
{
    int nota[TAM];
    char nombre[TAM] [50];
    int i;
    int max;
    int indice;
    char alumnoMax[50];

    /*for(i = 0; i < TAM; i++)
    {
        printf("\nIngrese su nombre: ");
        gets(nombre[i]); //4 formas nombre--nombre[i]--nombre[i][50]--nombre[3][i]

        printf("\nIngrese su edad: ");
        scanf("%d", &nota[i]);

        fflush(stdin);
    }
    */
    cargarConDatos(nota,TAM);
    cargarnombre(nombre,TAM);
    max = darMaximo(nota,TAM);
    indice = elIndice(indice,TAM);
    strcpy(alumnoMax,nombre[indice]);

    for(i = 0; i < TAM; i++)
    {
        printf("\nSu nombre es %s y su edad es %d edad %d\n",nombre, indice,nota);
    }
    printf("%s",alumnoMax);
}
void cargarConDatos(int array[], int cantidad)
{
    int aux[] = {5,11,55};
    int i;
    for(i = 0; i < cantidad; i++)
    {
        //array[i] = i*10;
        array[i] = aux[i];
    }
}
void cargarnombre(char nombre[] [50], int cantidad)
{
    char aux[] [50] = {"Fr","Op","Lo"};
    int i;
    for(i = 0; i < cantidad; i++)
    {
        strcpy(nombre[i], aux[i]);
    }

}

int darMaximo(int array[],int cantidad)
{
    int i;
    int max;
    for(i = 0 ; i < cantidad ; i++)
    {
        if(i == 0 || array[i] > max)
        {
            max = array[i];
        }

    }
    return max;
}
int elIndice(int indice[],int cantidad)
{
    int i;
    int max;
    int maxIn;
    for(i = 0; i < cantidad; i++)
    {
        if(i == 0 || indice[i] > max)
        {
            max = indice[i];
            maxIn = i;
        }
    }
    return maxIn;
}

/*void elNombre(char arrayPalabras[],int array[],int cantidad)
{
    int i;
    int indice;
    indice = elIndice(array,cantidad);
    arrayPalabras[indice];
    printf("%s",elNombre);
}
*/

