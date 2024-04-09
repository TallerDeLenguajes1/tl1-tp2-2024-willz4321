#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    #define N 20
    int i;

    double vt[N];
    double *punt = vt;

    for (i = 0; i < N; i++)
    {
        *(punt + i) = 1 + rand() % 100; 
        printf("\n%p", *(punt + i)); 
    }

    return 0; 
}
