#include <stdio.h>
#include <string.h>

void SubString(char origem[], char destino[], int posini, int posfinal)
{
    int i, j=0;

    for (i=posini; i<=posfinal; i++, j++)
        destino[j]=origem[i];

    destino[j]='\0';
}

int main(void)
{
    char vetor1[15]={"PROGRAMACAO"}, vetor2[15];

    printf("%s", vetor1);
    SubString(vetor1, vetor2,7,10);
    printf("\n%s", vetor2);
}
