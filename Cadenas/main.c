#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    strlen
    strcpy
    strupr
    strlwr
    strcmp
    stricmp
    strcat
    */
    char palabra[10];
    char palabraDos[10];
    char todo[50];
    int lenght;
    int comp;
    printf("Ingrese una palabra: ");
    gets(palabra);    // scanf("%[ \n]" en linux esto significa ignorar el \n(usar para linux para que cuente los espacios o fgets(palabra,10,stdin)
    lenght = strlen(palabra); //ver el largo de la palabra
    strcpy(palabraDos,"Perro");//permite copiar los datos de un vector a otro copiando los datos de palabra a palabraDos
    strlwr(palabra); // o strlupr cambia las letras a minusculas(lwr) o mayuscula(upr)
    strlwr(palabraDos);
    comp = strcmp(palabra, palabraDos); //compara los datos de los vectores,hace una resta (minusculas valen mas que mayusculas m-M = -1 /M-M|| m-m = 0/ M-m = 1
    printf("%d", comp);
    if(strcmp(palabra,palabraDos) == 0)
        {
            printf("\nSon iguales");
        }
    else
    {
        printf("\nNo son iguales");
    }

    strcat(todo,palabra);       //concatena palabras
    strcat(todo,palabraDos);
    printf("\ntodo %s", todo);
    printf("\nLa palabra es %s y el largo es %d ",palabraDos,lenght);
    return 0;
}
