#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
    srand(time(NULL));
    int i;
    double vt[N];
    for (int i = 0; i < N; i++)
    {
        vt[i]=1+rand()%100;
        printf("%.2f ", vt[i]);

    }
    
    return 0;
}