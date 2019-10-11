#include <stdio.h>
#include <stdlib.h>
#include <conio.h>//para el gecthe
typedef struct
{
    int a;
    float b;
    char c;

} sDato;

void cargarDatos(sDato*,int);
void mostrarDatos(sDato*,int);


int main()
{
    /*sDato unDato = {1,5.3,'B'};
    sDato* pDato;
    pDato = &unDato;
    //pDato = unDato incorrecto
    printf("%d -- %f -- %c",(*pDato).a,
                            (*pDato).b, ESTO ESTA MAL ES MUCHO CODIGO
                            (*pDato).c);

                            printf("%d -- %f -- %c",pDato ->a,
                                                    pDato ->b,
                                                    pDato ->c);

    */
    sDato unDato[2];// = {{2,3.26,'C'},{1,5.3,'B'}};
    //sDato* pDato;
    //pDato = &unDato; Incorrecto no hace falta el & con vectores
    //pDato = unDato;
    cargarDatos(unDato, 2);
    printf("\n \n");
    mostrarDatos(unDato, 2);
    /*for(i = 0; i< 2; i++)
    {
        printf(" -- %d -- %f -- %c",(*(pDato +i)).a,
                                    (*(pDato +i)).b,            ESTO ESTA MAL ES MUCHO CODIGO
                                    (*(pDato +i)).c);

           printf(" -- %d -- %f -- %c",(pDato+i) ->a,
                                       (pDato+i) ->b,
                                       (pDato+i) ->c);
    }
    */
    return 0;
}

void cargarDatos(sDato* unDato,int tam)
{
    int i;
    for(i = 0;i < tam;i++)
        {
            printf("\nIngrese entero: ");
            scanf("%d", &(unDato+i)->a);
            printf("\nIngrese flotante: ");
            scanf("%f",&(unDato+i)->b);
            printf("\nIngrese caracter: ");
            fflush(stdin);
            //scanf("%c",&(pDato+i)->c); sirve tambien
            (unDato+i)->c = getche();
        }

}

void mostrarDatos(sDato* unDato,int tam)
{
    int i;
    for(i = 0;i < tam;i++)
        {
             printf(" -- %d -- %f -- %c",(unDato+i) ->a,
                                       (unDato+i) ->b,
                                       (unDato+i) ->c);
        }

}
