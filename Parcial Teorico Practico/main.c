#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define A 3
typedef struct
{
    int id;
    char nombre[50];
    int precio;
}sProducto;

void hardcodeo(sProducto*,int);
void printProduct(sProducto,int);
void printProducts(sProducto*,int);

int main()
{
    sProducto unProducto;
    hardcodeo(unProducto,A);
    printProducts(unProducto,A);
    return 0;
}

void hardcodeo(sProducto* list,int cant)
{
    int id[] = {1,2,3};
    char nombre [][50] = {"Producto A","Producto B","Producto BC"};
    int precio[] = {500,300,800};
    int i;
    for(i = 0; i < cant; i++)
        {
            list[i].id = id[i];
            strcpy(list[i].nombre,nombre[i]);
            list[i].precio = precio[i];
        }

}

void printProduct(sProducto unProducto,int cant)
{
    printf("%d---%s---%d",unProducto.id,unProducto.nombre,unProducto.precio);
}

void printProducts(sProducto* list,int cant)
{
    int i;
    for(i = 0;i < cant;i++)
        {
            printProduct(list[i],cant);
        }

}
