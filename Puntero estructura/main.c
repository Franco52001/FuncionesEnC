#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define A 1
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
int pedirDatos(sPersona*,int cant,int contId);
void mostrar(sPersona*, int cant);
void ordenar(sPersona*,int cant);
void swap(sPersona* a, sPersona* b);
void incrementarId(int* ultimoId);
int searchFree(sPersona* list,int length);
int buscarProximoId(sPersona*,int);
void toLowerCase(char* string);
void firstLetterToUpperCase(char* letter);
int onlyLetters(char* string);
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
        printf("4.Salir\n");
        printf("Elija una opcion\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            if(pedirDatos(unaPersona,A,contId) == 1)
            {
                incrementarId(&contId);
            }
            else
            {
                printf("\nNo hay mas espacio\n");
            }
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
    while(opcion!=4);


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
    }
    return id +i;
}


int pedirDatos(sPersona* unDato,int cant,int contId)
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
        toLowerCase((unDato+i)->apellido);
        firstLetterToUpperCase((unDato+i)->apellido);
        while(onlyLetters((unDato+i)->apellido) == -1)
        {
            printf("Ingrese apellido nuevamente: ");
            fflush(stdin);
            gets((unDato+i)->apellido);
        }
        (unDato + i) -> id = contId;
        printf("\n");
        unDato[i].isEmpty = 1;
        r = 1;
    }
    return r;
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

void toLowerCase(char* string)
{
    int length;
    int i;
    length = strlen(string);
    for(i = 1; i < length; i++)
    {
        if(string[i] > 64 && string[i] < 91)
        {
            string[i] = string[i] + 32;
        }
    }
}
void firstLetterToUpperCase(char* letter)
{
    if(letter[0] > 96 && letter[0] < 123)
    {
        letter[0] = letter[0] -32;
    }
}

int onlyLetters(char* string)
{
    int length;
    int i;
    int retorno = 1;
    length = strlen(string);
    for(i = 0; i < length; i++)
    {
        if((string[i] > 90 && string[i] < 97) || string[i] < 65 || string[i] > 123)
        {
            retorno = -1;
        }
    }
    return retorno;
}
