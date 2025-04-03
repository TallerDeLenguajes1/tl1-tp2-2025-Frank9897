#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

struct compu
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
}typedef compu;


int main()
{
    srand(time(NULL));
    int velocidad_aleatoria = 1 + rand() % 3;
    int anio_aleatorio = 2015 + rand() % (2024-2015) + 1;
    int nucleos_aleatorio = 1 + rand() % 8 ;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
        "Pentium"};
    return 0;
}