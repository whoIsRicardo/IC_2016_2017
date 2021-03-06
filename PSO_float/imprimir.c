#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimir2DF(float** matriz, int linhas, int colunas)
{
    int i,j;
    for(i = 0; i < linhas; i ++)
    {
        for(j = 0; j < colunas; j ++)
        {
            printf(" %f ", matriz[i][j]);
        }
        printf("\n");
    }
}
void imprimir2De(float** matriz, int linhas, int colunas)
{
    int i,j;
    for(i = 0; i < linhas; i ++)
    {
        for(j = 0; j < colunas; j ++)
        {
            printf(" %e ", matriz[i][j]);
        }
        printf("\n");
    }
}
void imprimir2DI(int** matriz, int linhas, int colunas)
{
    int i,j;
    for(i = 0; i < linhas; i ++)
    {
        for(j = 0; j < colunas; j ++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}
void imprimir1De(float* vetor, int colunas)
{
    int j;
    for(j = 0; j < colunas; j ++)
    {
        printf(" %e \n", vetor[j]);
    }
}
void imprimir1DF(float* vetor, int colunas)
{
    int j;
    for(j = 0; j < colunas; j ++)
    {
        printf(" %f \n", vetor[j]);
    }
}
void imprimir1DI(int* vetor, int colunas)
{
    int j;
    for(j = 0; j < colunas; j ++)
    {
        printf(" %d ", vetor[j]);
    }
    printf("\n");
}
