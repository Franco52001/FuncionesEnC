#include <stdio.h>
#include <stdlib.h>

int main()
{
    char apellido[15];//= "Oliveri";
    char nombre[15];// = "Franco";
    char concatenar[35];

    int i;
    printf("Ingrese su apellido\n");
    gets(apellido);
    for(i = 0; i < 15; i++){
        if(apellido[i] == ' ' )
            {
            printf(" %c", toupper(apellido[i+1]));
            i++;
        } else {
            printf("%c", apellido[i]);
        }
     }
    printf("\nIngrese su nombre\n");
    gets(nombre);
    for(i = 0; i < 15; i++){
        if(nombre[i] == ' ')
            {
            printf(" %c", toupper(nombre[i+1]));
            i++;
        } else {
            printf("%c", nombre[i]);
        }
     }


    strcat(concatenar,apellido);
    strcat(concatenar,", ");
    strcat(concatenar,nombre);
    printf("\n%s",concatenar);


}
