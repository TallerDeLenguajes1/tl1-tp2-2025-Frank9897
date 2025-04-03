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


void listarPCs(compu pcs[],int cantidad);

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
    
    listarPCs(pcs,N);
    return 0;
}

void listarPCs(compu pcs[],int cantidad)
{
    printf("\nLista de PCs:");
    for (int i = 0; i < cantidad; i++)
    {
        printf("\n****PC %d****",i+1);
        printf("\n Velocidad: %d GHZ",pcs[i].velocidad);
        printf("\n Anio: %d",pcs[i].anio);
        printf("\n Cantidad de Nucleos: %d",pcs[i].cantidad_nucleos);
        printf("\n CPU: %s",pcs[i].tipo_cpu);
        printf("\n");
    }
    
}