#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Cesar(char *palav, int num, char *mensa)
{
   for(int i=0; i<strlen(palav); i++)
   {

            if(*palav != ' ' && *palav != '\0')
            {
                palav = palav+i;
                mensa+i = palav + num;
            }
   }
}




int main()
{
    int k;
    char palavra[30], mensagem[30];

    printf("Digite um valor: ");
    scanf("%i", &k);

    while(k!=0)
    {
        printf("Digite sua mensagem: ");
        scanf("%[^\n]", palavra);

        Cesar(palavra, k, mensagem);

        printf("%c", mensagem);
    }

    return 0;
}
