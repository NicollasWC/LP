#include <stdio.h>

int Digitos(int n, int cont)
{
 if (n<9)
    return cont;
 else
    return Digitos(n/10, cont+1);
}

void main()
{
    int n;
    int cont;
    cont = 1;

    scanf("%i", &n);
    printf("\n%d", Digitos(n, cont));
}
