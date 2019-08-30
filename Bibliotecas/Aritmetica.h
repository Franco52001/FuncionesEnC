#include <stdio.h> // inclui esto para solucionar el warning de printf, como uso las funciones de esta carpeta(printf) debo incluir esto en el h
//Aca estan los prototipos de las funciones
/** \brief La funcion es como el prompt, pide un numero y lo valida con 2 limites(max y min)
 *
 * \param char[] Texto que se va a mostrar
 * \param int El minimo valor
 * \param int El maximo valor
 * \return int El valor ingresado por el usuario
 *
 */
int pedirEntero(char[], int, int);// no se puede usar una misma funcion para pedir dos datos distintos(no puedo pedir numero y edad con solo esto debo hacer otra funcion para edad
