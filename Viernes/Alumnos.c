#include "Alumnos.h"
void mostrarAlumno(sAlumno unAlumno)
{
    printf("%d--%s--%d\n", unAlumno.legajo,unAlumno.nombre,unAlumno.nota);
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
    return miAlumno;
}
void cargarAlumnos(sAlumno lista[],int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        lista[i] = pedirAlumno();
    }


}
void mostrarlistadoAlumnos(sAlumno lista[],int cant)
{
    int i;
    for(i = 0; i < cant ; i++ )
    {
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
    }

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
