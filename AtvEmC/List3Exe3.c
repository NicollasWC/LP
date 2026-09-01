#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char Palavra[32], Letra;
    int Indice[32], c=0;
    
    scanf("%[^\n]", Palavra);
    scanf(" %c", &Letra);

    for(int i=0; i<strlen(Palavra); i++)
    {   
        if(toupper(Palavra[i]) == toupper(Letra))
        {
            Indice[c]=i;
            c++;
        }
    }
    for(int i=0; i<c; i++)
    {
        printf("%d ", Indice[i]);
    }
        return 0;
}
