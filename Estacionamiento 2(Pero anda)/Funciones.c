#include "Funciones.h" // SI PONGO AUTOS PERO NO PERSONAS EH INTENTO MOSTRAR CRASHEA
int harcodearPersonas(sPersona listP[],int cant)
{
    int i;
    char nombre[][51] = {"Maria","Ezequiel","German","Yanina"};
    int anio[] = {1990,1980,2000,1995};
    int mes[] = {3,4,12,11};
    int dia[] = {33,22,25,11};
    int id[] = {100,101,105,106};
    int retorno = 0;
    for(i = 0; i < cant ; i++)
    {
        strcpy(listP[i].nombre,nombre[i]);
        listP[i].fechaNac.anio = anio[i];
        listP[i].fechaNac.mes = mes[i];
        listP[i].fechaNac.dia = dia[i];
        listP[i].idPersona = id[i];
        retorno = 1;
    }
    return retorno;
}
int harcodearVehiculos(sVehiculo listV[],int cant)
{
    int i;
    char patente[][10] = {"AAA111", "BBB222", "AAA222", "WWW777",
                          "AKK222","EEE111","UUU777","YYY778","ABC123","QQQ128"
                         };
    int dia = {26};
    int mes = {9};
    int anio = {2019};
    int horaIngreso[] = {10,9,8,11,10,11,9,7,7,14};
    int horaEgreso[] = {11,11,11,12,14,15,12,10,11,17};
    int idDuenio[] = {101,106,100,106,101,101,100,105,106,106};
    int retorno = 0;
    for(i = 0; i < cant ; i++)
    {
        strcpy(listV[i].patente,patente[i]);
        listV[i].fechaIngreso.dia = dia;
        listV[i].fechaIngreso.mes = mes;
        listV[i].fechaIngreso.anio = anio;
        listV[i].horaIngreso = horaIngreso[i];
        listV[i].horaEgreso = horaEgreso[i];
        listV[i].idDuenio = idDuenio[i];
        retorno = 1;
    }
    return retorno;
}

void mostrarUnaPersona(sPersona unaPersona)
{
    printf("%02d %20s\t %02d/%02d/%4d \n", unaPersona.idPersona
           , unaPersona.nombre
           , unaPersona.fechaNac.dia
           , unaPersona.fechaNac.mes
           , unaPersona.fechaNac.anio);
}

void mostrarPersonas(sPersona lista[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(lista[i].estado == TRUE)
        {
            mostrarUnaPersona(lista[i]);
        }
    }
}
void mostrarUnVehiculo(sVehiculo unVehiculo, sPersona listaP[],int cant)
{
    int i;
    printf("%8s \t %02d \t %02d \t %02d/%02d/%4d \t",unVehiculo.patente
           ,unVehiculo.horaIngreso
           ,unVehiculo.horaEgreso
           ,unVehiculo.fechaIngreso.dia
           ,unVehiculo.fechaIngreso.mes
           ,unVehiculo.fechaIngreso.anio);

    for(i=0; i<cant; i++)
    {
        if(unVehiculo.idDuenio == listaP[i].idPersona)
        {
            printf("Duenio: %s\n\n", listaP[i].nombre);
            break;
        }
    }

}

void mostrarVehiculos(sVehiculo listaV[],sPersona listaP[], int cant)
{
    int i;
    printf("Autos con sus duenios: \n");
    for(i=0; i<cant; i++)
    {
        mostrarUnVehiculo(listaV[i],listaP,cant);
    }
}

int buscarPorId(sPersona lista[],int cant,int id)
{
    int i;
    int retorno = -1;
    printf("Ingrese ID: ");
    scanf("%d",&id);
    if (lista != NULL && cant > 0)
    {
        for(i = 0; i < cant; i++)
        {
            if(lista[i].idPersona == id)
            {
                retorno = i;
                break;
            }
        }

    }
    return retorno;
}

int buscarPorPatente(sVehiculo listaV[],int cant)
{
    int i;
    char patente[51];
    printf("\nIngrese la patente: ");
    fflush(stdin);
    gets(patente);
    for(i=0; i<cant; i++)
    {
        if(strcmp(listaV[i].patente, patente) == 0)
        {
            return i;
        }
    }
    return -1;
}

int darBajaPersona(sPersona lista[], int cant)
{
    int retorno = -1;
    int id = 0;
    int index;
    int remove;
    if (lista != NULL && cant > 0)
    {
        mostrarPersonas(lista,cant);
        index = buscarPorId(lista,cant,id);
        if(index != -1)
        {
            printf("\nEsta seguro que desea eliminar los siguientes datos?: ");
            mostrarUnaPersona(lista[index]);
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
int modificarPersona(sPersona lista[],int cant)
{
    int retorno = -1;
    int id = 0;
    int index;
    int mod;
    if (lista != NULL && cant > 0)
    {
        mostrarPersonas(lista,cant);
        index = buscarPorId(lista,cant,id);
        if(index != -1)
        {
            while(mod !=5)
            {
                mostrarUnaPersona(lista[index]);
                printf("\nQue desea modificar?\n1.Nombre\n2.Fecha de nacimiento\n3.Terminar ");
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
                    printf("\nIngrese nueva fecha: ");
                    printf("Dia: ");
                    scanf("%d",&lista[index].fechaNac.dia);
                    printf("Mes: ");
                    scanf("%d",&lista[index].fechaNac.mes);
                    printf("Año: ");
                    scanf("%d",&lista[index].fechaNac.anio);
                    retorno = 0;
                    break;

                case 3:
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

int darBajaVehiculo(sVehiculo listaV[],sPersona listaP[], int cant)
{
    int retorno = -1;
    int index;
    int remove;
    if (listaV != NULL && listaP != NULL && cant > 0)
    {
        mostrarVehiculos(listaV,listaP,cant);
        index = buscarPorPatente(listaV,cant);
        if(index != -1)
        {
            printf("\nEsta seguro que desea eliminar los siguientes datos?: ");
            mostrarUnVehiculo(listaV[index],listaP,cant);
            printf("\n1.Si\n2.No\n");
            scanf("%d",&remove);
            if(remove == 1)
            {
                listaV[index].estado = FALSE;
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

