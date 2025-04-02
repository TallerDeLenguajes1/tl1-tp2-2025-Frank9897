#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
    srand(time(NULL));
    int i;
    double vt[N];
    double *pvt = vt;
    for (int i = 0; i < N; i++)
    {
        *pvt=1+rand()%100;
        printf("%.2f ", *pvt);
        pvt++;
        printf("\n");
    }
    return 0;
}