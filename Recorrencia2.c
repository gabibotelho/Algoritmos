#include <stdio.h>
#include <stdlib.h>

int maior(int v[], int tamanho)
{
    if(tamanho == 0)
        return 0;
    if(v[tamanho-1] > maior(v,tamanho-1))
        return v[tamanho-1];
    else
        return maior(v,tamanho-1);
}

int menor(int v[], int tamanho)
{
    if(tamanho == 0)
        return 5000;
    if(v[tamanho-1] < menor(v,tamanho-1))
        return v[tamanho-1];
    else
        return menor(v,tamanho-1);
}

int main()
{
    int vetor[10];
    int i;

    vetor[0] = 2;
    vetor[1] = 45;
    vetor[2] = 3;
    vetor[3] = 89;
    vetor[4] = 23;
    vetor[5] = 5;
    vetor[6] = 9;
    vetor[7] = 12;
    vetor[8] = 21;
    vetor[9] = 15;

    printf("MAIOR: %d\n", maior(vetor,10));
    printf("MENOR: %d", menor(vetor,10));

    system("pause>null");
    return 0;
}
