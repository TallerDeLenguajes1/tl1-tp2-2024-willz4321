#include<stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    #define N 5
    #define M 7
    
    int i,j;
    int mt[N][M];
    int *punt = &mt[0][0];

    printf("Imprime la direccion de memoria\n");
    for(i = 0;i<N; i++)
    {
    for(j = 0;j<M; j++)
    {
    //Direccion de memoria
    *(punt + i * M + j) = 1 + rand() % 100;
     printf("%p ", *(punt + i * M + j));
    }
    printf("\n");
    }

    printf("\n\nImprime el valor de cada elemento\n");
    for(i = 0;i<N; i++)
    {
    for(j = 0;j<M; j++)
    {
    //Valores de cada elemento
    *(punt + i * M + j) = 1 + rand() % 100;
     printf("%d ", mt[i][j]);
    }
    printf("\n");
    }
}
