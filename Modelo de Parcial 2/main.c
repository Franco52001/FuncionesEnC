#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Controller.h"

int main()
{
    LinkedList* listaLlamadas = ll_newLinkedList();
    int option;
    do
    {
        printf("Menu:\n"
               "1.Cargar archivo de llamadas\n"
               "2.Imprimir llamadas\n"
               "3.Generar nuevo archivo de llamadas\n"
               "4.Salir\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            controller_loadFromText("data.csv",listaLlamadas);
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            break;
        }
    }
    while(option != 4);

    return 0;
}
