#include <stdio.h>
#include <stdlib.h>

int main()
{
    char apellido[15];// = "Oliveri";
    char nombre[15];// = "Franco";
    char concatenar[35];
    int i;
    int largo;

    printf("Ingrese su apellido\n");
    gets(apellido);
    printf("\nIngrese su nombre\n");
    gets(nombre);
    strcat(concatenar,apellido);
    strcat(concatenar,", ");
    strcat(concatenar,nombre);

    largo = strlen(concatenar);

    concatenar[0] -= 32; // cualquier letra en la tabla ascii que le reste 32 termina en su mayuscula
    for(i = 0; i < largo; i++)
    {
    if(concatenar[i] == 32) //32 en la tabla ascii es el espacio asi que cuando lo encuentra en (concatenar," ,") le va a restar 32 a la primera letra
        {
            i++;
            concatenar[i] -=32;
            break;
        }
    }
printf("\n%s",concatenar);

}
