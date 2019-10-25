#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* pArchive;
    char miNombre[3][50];
    int i = 0;
    char aux[50];
    pArchive = fopen("miNombre.txt","w");//el primero representa la ubicacion del archivo(si no hay nada lo manda al escritorio,el segundo representa para que lo abris(modos de apertura)

    //fprintf(pArchive,"Me llamo: %s",miNombre);//si printf escribe en la consola este escribe en el archivo
    //fprintf(pArchive," Oliveri");

    pArchive = fopen("miNombre.txt","r");
    while(!feof(pArchive))
        {
            fgets(miNombre,50,pArchive);
            strcpy(miNombre[i],aux);
            i++;
        }
        fclose(pArchive);
    for(i= 0; i < 3; i++)
    {
    printf("%s",miNombre);
    }

    return 0;
}
