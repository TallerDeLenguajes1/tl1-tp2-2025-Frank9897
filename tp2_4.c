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
    
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};

    compu pcs[N];

    for (int i = 0; i < N; i++)
    {
            
        int velocidad_aleatoria = 1 + rand() % 3;
        int anio_aleatorio = 2015 + rand() % (2024-2015 + 1);
        int nucleos_aleatorio = 1 + rand() % 8 ;
        pcs[i].velocidad = velocidad_aleatoria;
        pcs[i].anio = anio_aleatorio;
        pcs[i].cantidad_nucleos = nucleos_aleatorio;
        pcs[i].tipo_cpu = tipos[rand()%6];
    }
    
    return 0;
}