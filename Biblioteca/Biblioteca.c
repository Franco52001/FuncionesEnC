#include "biblioteca.h"
//FUNCIONES
int inicializar(sBiblioteca lista[],int cant)
{
    int i;
    int retorno = -1;
    if(lista != NULL && cant > 0)
    {
        for(i = 0; i < cant; i++)
        {
            lista[i].estado = FALSE;
        }
        retorno = 0;
    }
    return retorno;
}
int searchFree(sBiblioteca list[],int length)
{
    int i;
    int index = -1;
    for(i = 0; i < length; i++)
    {
        if(list[i].estado == FALSE)
        {
            index = i;
            break;
        }
    }
    return index;
}
int harcodear(sBiblioteca lista[],int cant)
{
    int numeros [] = {101,102,105,107};
    char nombres[][50] = {"Juan","Maria","Jose","Marcos"}; // SIZE ES 4 POR QUE HARDCODEE 4 DATOS Y HARDCODEO 4 Y SIZE ES 10 ME TIRA 6 DATOS BASURA
    char apellido[][51] = {"oliveri","boca","lezama"};
    int anio[] = {1990,1980,2000,1995};
    int mes[] = {3,4,12,11};
    int dia[] = {33,22,25,11};
    int id[] = {100,101,105,106};
    int i;
    int retorno = 0;
    for(i = 0; i < cant; i++)
    {
        lista[i].numeros = numeros[i];
        strcpy(lista[i].nombre,nombres[i]);
        strcpy(lista[i].apellido,apellido[i]);
        lista[i].fechas.anio = anio[i];
        lista[i].fechas.mes = mes[i];
        lista[i].fechas.dia = dia[i];
        lista[i].id = id[i];
        lista[i].estado = TRUE;
        retorno = 1;
    }
    return retorno;
}
sBiblioteca agregarUno()
{
    sBiblioteca unDato;
    printf("Ingrese numero: ");
    scanf("%d",&unDato.numeros);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(unDato.nombre);
    toLowerCase(unDato.nombre);
    firstLetterToUpperCase(unDato.nombre);
    while(onlyLetters(unDato.nombre) == -1)
    {
        printf("Ingrese nombre nuevamente: ");
        fflush(stdin);
        gets(unDato.nombre);
    }

    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(unDato.apellido);
    toLowerCase(unDato.apellido);
    firstLetterToUpperCase(unDato.apellido);
    while(onlyLetters(unDato.apellido) == -1)
    {
        printf("Ingrese apellido nuevamente: ");
        fflush(stdin);
        gets(unDato.apellido);
    }
    printf("Ingrese fecha: ");
    printf("Dia: ");
    scanf("%d",&unDato.fechas.dia);
    printf("Mes: ");
    scanf("%d",&unDato.fechas.mes);
    printf("Anio: ");
    scanf("%d",&unDato.fechas.anio);
    unDato.estado = FALSE;
    return unDato;
}
int agregarTodos(sBiblioteca lista[], int cant)
{
    int i;
    int retorno = -1;
    i = searchFree(lista,cant);
    if((cant > 0 && cant < 1001) && lista != NULL)
    {
        if(i != -1)
        {
            lista[i] = agregarUno();
            lista[i].estado = TRUE;
            retorno = 1;
        }
    }
    return retorno;
}
void mostrarUno(sBiblioteca variable)
{
    printf("%d--%s--%s--%d/%d/%d\n",variable.numeros,variable.nombre,variable.apellido,variable.fechas.anio,variable.fechas.mes,variable.fechas.dia);
}

void mostrarTodos(sBiblioteca lista[],int cant)
{
    int i;
    for(i = 0; i < cant ; i++ )
    {
        if(lista[i].estado == TRUE)
            mostrarUno(lista[i]);
    }
}

void ordenarPorNombre(sBiblioteca lista[],int cant)
{
    int i;
    int j;
    sBiblioteca aux;

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
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }
}
int buscarPorId(sBiblioteca lista[],int cant,int id)
{
    int i;
    int retorno = -1;
    printf("Ingrese ID: ");
    scanf("%d",&id);
    if (lista != NULL && cant > 0)
    {
        for(i = 0; i < cant; i++)
        {
            if(lista[i].id == id)
            {
                retorno = i;
                break;
            }
        }

    }
    return retorno;
}
int darBaja(sBiblioteca lista[],int cant)
{
    int retorno = -1;
    int id = 0;
    int index;
    int remove;
    if (lista != NULL && cant > 0)
    {
        mostrarTodos(lista,cant);
        index = buscarPorId(lista,cant,id);
        if(index != -1)
        {
            printf("\nEsta seguro que desea eliminar los siguientes datos?: ");
            mostrarUno(lista[index]);
            printf("\n1.Si\n2.No\n");
            scanf("%d",&remove);
            if(remove == 1)
            {
                lista[index].estado = FALSE;
                retorno = 0;
            }
            else if(remove == 2)
            {
                retorno = 1;
            }
            else
            {
                printf("Opcion no valida,Ingrese nuevamente");
                scanf("%d",&remove);
            }
        }
    }

    return retorno;

}
int modificar(sBiblioteca lista[],int cant)
{
    int retorno = -1;
    int id = 0;
    int index;
    int mod;
    if (lista != NULL && cant > 0)
    {
        mostrarTodos(lista,cant);
        index = buscarPorId(lista,cant,id);
        printf("Que desea modificar? a:nombre/n:nota");
        index = buscarPorId(lista,cant,id);
        if(index != -1)
        {
            while(mod !=5)
            {
                mostrarUno(lista[index]);
                printf("\nQue desea modificar?\n1.Nombre\n2.Apellido\n3.Salario\n4.Terminar ");
                scanf("%d",&mod);
                switch(mod)
                {
                case 1:
                    printf("\nIngrese nuevo nombre: ");
                    fflush(stdin);
                    gets(lista[index].nombre);
                    toLowerCase(lista[index].nombre);
                    firstLetterToUpperCase(lista[index].nombre);
                    retorno = 0;
                    break;

                case 2:
                    printf("\nIngrese nuevo apellido: ");
                    fflush(stdin);
                    gets(lista[index].apellido);
                    toLowerCase(lista[index].apellido);
                    firstLetterToUpperCase(lista[index].apellido);
                    retorno = 0;
                    break;

                case 3:
                    printf("\nIngrese nuevo numero: ");
                    scanf("%d",&lista[index].numeros);
                    retorno = 0;
                    break;

                case 4:
                    retorno = 1;
                    break;
                default:
                    printf("Opcion no valida\n");
                    break;
                }
            }
        }
    }
    return retorno;
}
void toLowerCase(char string[])
{
    int length;
    int i;
    length = strlen(string);
    for(i = 1; i < length; i++)
    {
        if(string[i] > 64 && string[i] < 91)
        {
            string[i] = string[i] + 32;
        }
    }
}
void firstLetterToUpperCase(char letter[])
{
    if(letter[0] > 96 && letter[0] < 123)
    {
        letter[0] = letter[0] -32;
    }
}
int onlyLetters(char string[])
{
    int length;
    int i;
    int retorno = 1;
    length = strlen(string);
    for(i = 0; i < length; i++)
    {
        if((string[i] > 90 && string[i] < 97) || string[i] < 65 || string[i] > 123)
        {
            retorno = -1;
        }
    }
    return retorno;
}
