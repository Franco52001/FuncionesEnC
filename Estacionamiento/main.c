#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"

#define A 4
// Ordenar por patente y por nombre


int main()
{
    int index;
    sPersona unaPersona[A];
    sFecha unaFecha[A];
    sVehiculo unVehiculo[A];
    harcodearPersona(unaPersona,A);
    harcodearFecha(unaFecha,A);
    harcodearVehiculo(unVehiculo,A);
    printf("Duenios: \n");
    mostrar(unaPersona,unaFecha,A);
    printf("Autos con sus duenios: \n");
    mostrarVehiculos(unVehiculo,unaPersona,A);
    index = buscarPorPatente(unVehiculo,unaPersona,A);
    mostrarPersona(unaPersona[index]);
    return 0;
}

