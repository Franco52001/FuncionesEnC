#include "Alumnos.h"

int inicializarAlumnos(sAlumno lista[],int cant)
{
    int i;
    int retorno = -1;
    if(lista != NULL && cant > 0)
    {
        for(i = 0; i < cant; i++)
        {
            lista[i].estado = LIBRE;
        }
        retorno = 0;
    }
    return retorno;
}

void mostrarAlumno(sAlumno unAlumno)
{
    printf("%d--%s--%d\n",unAlumno.legajo,unAlumno.nombre,unAlumno.nota);
}
sAlumno pedirAlumno()
{
    sAlumno miAlumno;
    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);
    miAlumno.estado = LIBRE;

    return miAlumno;
}
int buscarLibre(sAlumno lista[],int cant)
{
    int i;
    int index = -1;
    for(i = 0; i < cant; i++)
    {
        if(lista[i].estado == LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

int cargarAlumnos(sAlumno lista[],int cant)
{
    int i;
    int retorno = 0;
    i = buscarLibre(lista,cant);
    if(i != -1)
    {
        lista[i] = pedirAlumno();
        lista[i].estado = OCUPADO;
        retorno = 1;
    }
    return retorno;
}
void mostrarlistadoAlumnos(sAlumno lista[],int cant)
{
    int i;
    for(i = 0; i < cant ; i++ )
    {
        if(lista[i].estado == OCUPADO)
            mostrarAlumno(lista[i]);
    }

}
void ordenarAlumnosPorNombre(sAlumno lista[],int cant)
{
    int i;
    int j;
    sAlumno auxAlumno;

    for(i = 0 ; i < cant-1; i++)
    {
        for(j = i+1; j < cant; j++)
        {
            if(strcmp(lista[i].nombre,lista[j].nombre) < 0)
            {
                /*auxAlumno.legajo = lista[i].legajo;
                lista[i].legajo = lista[j].legajo;      Esto no se puede usar en parciales
                lista[j].legajo = auxAlumno.legajo;
                */
                auxAlumno = lista[i];
                lista[i] = lista[j];
                lista[j] = auxAlumno;
            }
        }
    }
}
void harcoderAlumnos(sAlumno lista[],int cant)
{
    int legajo[] = {101,102,105};
    int nota[] = {10,5,9};
    char nombre[][50] = {"Juan","Maria","Jose"};
    int i;
    for(i = 0; i < cant; i++)
    {
        lista[i].legajo = legajo[i];
        lista[i].nota = nota[i];
        strcpy(lista[i].nombre,nombre[i]);
        lista[i].estado = OCUPADO;
    }

}
int buscarAlumnoPorLegajo(sAlumno lista[],int cant,int legajo)
{
    int i;
    int retorno = -1;

    if (lista != NULL && cant > 0)
    {
        for(i = 0; i < cant; i++)
        {
            if(lista[i].legajo == legajo)
            {
                retorno = i;
                break;
            }
        }

    }
    return retorno;
}
int darBajaPorLegajo(sAlumno lista[],int cant)
{
    int retorno = -1;
    int legajo;
    int index;
    char respuesta;
    if (lista != NULL && cant > 0)
    {
        mostrarlistadoAlumnos(lista,cant);
        printf("Ingrese un legajo : ");
        scanf("%d",&legajo);
        index = buscarAlumnoPorLegajo(lista,cant,legajo);
        if(index != -1)
        {
            printf("Esta seguro que desea eliminar al siguiente usuario?: ");
            mostrarAlumno(lista[index]);
            respuesta = getche();
            if(respuesta == 's')
            {
                lista[index].estado = LIBRE;
                retorno = 0;
            }
            else
            {
                retorno = 1;
            }

        }
    }

    return retorno;

}
int modificarAlumno(sAlumno lista[],int cant)
{
    int retorno = -1;
    int legajo;
    int index;
    char respuesta;
    if (lista != NULL && cant > 0)
    {
        mostrarlistadoAlumnos(lista,cant);
        printf("Ingrese un legajo : ");
        scanf("%d",&legajo);
        index = buscarAlumnoPorLegajo(lista,cant,legajo);
        printf("Que desea modificar? a:nombre/n:nota");
        index = buscarAlumnoPorLegajo(lista,cant,legajo);
        if(index != -1)
        {
            respuesta = getche();
            if(respuesta == 'a')
            {
                printf("\nIngrese nuevo nombre: \n");
                fflush(stdin);
                gets(lista[index].nombre);
                retorno = 0;
            }
            else if(respuesta == 'n')
            {
                printf("\nIngrese nueva nota: \n");
                scanf("%d", &lista[index].nota);
                retorno = 0;
            }
            else
            {
                retorno = 1;
            }
        }
    }
    return retorno;

}



/*int compararAlumnoPorLegajo(sAlumno unAlumno,sAlumno otroAlumno) funcion para comparar alumnos
{
    int comp = 0;
    if(unAlumno.legajo == otroAlumno.legajo)
        {
            comp = 1;
        }
    return comp;
}
*/
