#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main()
{
    srand(time(NULL));
    int mt[N][M];
    int *pmt = &mt[0][0];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            *(pmt + i * M + j) = 1 + rand() % 100;
            printf("%d ", *(pmt + i * M + j));
        }
        printf("\n");   
    }
    
    return 0;
}
