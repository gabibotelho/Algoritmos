#include <stdio.h>

int potencia(int a, int n)
{
    if(n == 0)
        return 1;
    else
        return (a * potencia(a, n-1));
}
int main()
{
    int a = 2, n = 8, resultado;
    resultado = potencia(a,n);
    printf("%d elevado a %d = %d", a, n,resultado);
    return 0;
}
