#include <stdio.h>
#include <string.h>

void Cripto(char *text1, char *text2)
{
    char control1[16]={"dp-eHt´5hC(8mri"};
    char control2[16]={"Ow3)*MVbxXz Yqf"};

    for(int i=0; i<strlen(text1); i++)
    {
        for (int j=0; j<16; j++)
        {
            if(*(text1+i) == control1[j])
            {
                *(text2+i) = control2[j];
                break;
            }
            else if(*(text1+i) == control2[j])
            {
                *(text2+i) = control1[j];
                break;
            }
            else
                (*(text1+i) = *(text2+i));

        }
    }
}




int main()
{
    char texto1[9], texto2[9], texto3[9];

    printf( "Informe um texto de até 8 caracteres:" );
    scanf( "%[^\n]", texto1 );

    Cripto( texto1, texto2 );
    Cripto( texto2, texto3 );

    printf( "O texto criptografado eh: \n%s\n e descriptografado eh: \n%s\n", texto2, texto3 );

    return 0;
}
