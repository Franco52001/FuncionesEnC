#include "Aritmetica.h" // inclui esto para solucionar el warning de function, poner este incluse como copiar lo que escribi en aritmetica.h en esta ventana pero de esta forma me ahorro codigo

//Aca esta la implementacion de la funcion
int pedirEntero(char msj[], int min, int max) // ese [] es de vectores
{
    int num;
    printf("%s", msj); // aca no puse "%s" y en la consola me tiraba error y despues me tomaba el dato cada vez(un error un acierto)
    scanf("%d", &num);  //aca puse msj(despiste) y el copilador me crasheaba, poner &d en vez de %d
    while(num < min || num > max)
        {
            printf("ERROR \a %s", msj);
            scanf("%d", &num);
        }
    return num;

}
