#include <stdio.h>
#include <stdlib.h>

int main()
{
    char apellido[15];// = "Oliveri";
    char nombre[15];// = "Franco";
    char concatenar[35];

    printf("Ingrese su apellido\n");
    gets(apellido);
    printf("\nIngrese su nombre\n");
    gets(nombre);
    strcat(concatenar,apellido);
    strcat(concatenar,", ");
    strcat(concatenar,nombre);
    printf("\n%s",concatenar);

}
