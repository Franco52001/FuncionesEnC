#include <stdio.h>
#include <stdlib.h>

int main()
{
<<<<<<< HEAD
    char apellido[15];//= "Oliveri";
    char nombre[15];// = "Franco";
=======
    char apellido[15] = {"Oliveri","PEPEPE"};
    char nombre[15] = "Franco";
>>>>>>> 31ebb9cec3d867455aa673e6a94b49c1e1fc9086
    char concatenar[35];
    int i;
    int largo;

    int i;
    printf("Ingrese su apellido\n");
<<<<<<< HEAD
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


=======
    //gets(apellido);
    printf("\nIngrese su nombre\n");
    //gets(nombre);
>>>>>>> 31ebb9cec3d867455aa673e6a94b49c1e1fc9086
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
