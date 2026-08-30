#include <stdio.h>
#include <string.h>

int main()
{
    char Palavra[32], Letra;
    int contador=0;
    
    scanf("%s", Palavra);
    scanf(" %c", &Letra);

    for(int i=0; i<strlen(Palavra); i++)
    {
        if(toupper(Palavra[i]) == toupper(Letra))
            contador++;
    }
    printf("%d\n", contador);
    
    return 0;
}
