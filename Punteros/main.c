#include <stdio.h>
#include <stdlib.h>
/*guarda direccion de memoria de una variable
  vector es un puntero estatico(no se puede modificar)
*/
void cargarVector(int*,int);
void mostrarVector(int*,int);
void incrementarId(int*);//como hacer id incremental con punteros


int main()
{/* CONCEPTO
    como declarar un puntero,poner tipo de dato,para asociar hay que pasar la direccion de memoria de una variable a un puntero
    //printf("%d",sizeof(double*));//como saber cuantos bits ocupan un tipo de dato,el*siempre ocupa 4 bits no importa el tipo de dato,sizeof siempre busca multiplos de 4
    int unEntero = 10;
    int* puntero = NULL;//el asterisco es lo que pide lo que esta dentro de la direccion de memoria y no la direccion de memoria en si
    int* otroPuntero;
    puntero = &unEntero;//obtener direccion de memoria &muestra direccion de memoria,Sin este igual crashea,con funciones esto no se hace,sin esto el puntero es igual a NULL
    printf("Ingrese un numero: ");
    scanf("%d",puntero);//si pido el scanf antes del puntero = &unEntero crashea y &puntero tmb
    if(puntero != NULL)//Con esto inicializa
        {
      printf("%d\n",unEntero);//muestra 10
      printf("El numero es: %d\n",*puntero);//muestra 10
      printf("%d\n",&unEntero);//muestra direccion de memoria del entero
      printf("%d\n",puntero);//muestra direccion de memoria a la que apunta el puntero
      printf("%d\n",&puntero);//muestra direccion de memoria del puntero
        otroPuntero = puntero;//esto guarda la direccion de memoria de unEntero
        printf("%d\n",*otroPuntero);//esto muestra el numero porque otroPuntero pide la direccion de memoria que se guarda en unEntero y el * muestra que esta en esa dirrecion
        }
    else
        {
        printf("Apunta a nada");
        }
        FINALIZA CONCEPTO
    CONCEPTO VECTORES
    int* puntero;
    int unEntero;
    puntero = &unEntero;
    printf("%p\n",puntero);
    printf("%p\n",puntero+0);
    printf("%p\n",puntero+1);
    printf("%p\n",puntero+2);
    printf("%p\n",puntero+3); // la p lo muestra en formato hexadecimal y saca warnings

    puntero = puntero +1;// == puntero++
    printf("%d\n",puntero);
    //esto es un array
    FINALIZA CONCEPTO VECTORES
    */
    //int* puntero;
    int vector[5]; //= {5,7,9,8,3};
    //int i;
    //puntero = &vector;
    //puntero = vector;//esta es correcta porque escribis menos
    //puntero = &vector[0];
    //estas tres devuelven la direccion de memoria del vector
    //puntero = vector[0]; esta no funciona esta devuelve el 5
    /*for(i = 0;i < 5;i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",puntero+i);//&*puntero+i tambien funciono
        }
    for(i = 0;i < 5;i++)
        {
            printf("%d\n",*(puntero+i));// == vector[i]-- no usar la segunda forma ser consistente

        }
        */
        int contID = 0;
        cargarVector(vector,5);
        mostrarVector(vector,5);
        incrementarId(&contID);
        printf("Sig ID %d\n",contID);
        incrementarId(&contID);
        printf("Sig ID %d\n",contID);

    return 0;
}
void cargarVector(int* vector,int tam)
{
    int i;
     for(i = 0;i < tam;i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",vector+i);
        }
}
void mostrarVector(int* vector,int tam)
{
    int i;
    for(i = 0;i < tam;i++)
        {
            printf("%d\n",*(vector+i));
        }
}
void incrementarId(int* ultimoId)
{
    *ultimoId = *ultimoId +1;

}
