#include <stdio.h>
#include <stdlib.h>
// recursividad tiene desventajas: si programo mal me crashea la maquina y consume mucha memoria(agrega 8 bits por cada numero)
int factorial(int);
int main()
{
    int resultado;
    resultado = factorial(5); // si pongo 13 en como esta ahora(osea primera version) me da un resultado basura
    printf("El factorial es: %d", resultado);
    return 0;
}

int factorial (int numero)
{
    int resultado; // hacer breakpoint aca para ver como cambia resultado durante este codigo

    if(numero == 0)
    {
        resultado = 1;
    }
    else
        {
            resultado = numero * factorial(numero - 1); // aca afecta el orden de prioridad, factorial tiene orden de prioridad antes que numero entonces vuelve a hacer la funcion factorial solo que ahora con un numero - 1(si yo puse numero = 5
                                                        // entonces leera ese numero pero al leer factorial volvera a hacer factorial pero con 5-1 = 4, entonces la leera de vuelta y hara lo mismo hasta llegar a 0 y de ahi vuelve para arriba
                                                        // porque en 0 factorial se vuelve 1
        }

    return resultado; // por si no me acuerdo este return saco resultado de esta funcion y lo mando al main
}
