#include <stdio.h>
#include <string.h>

void SubString(char orig[], char dest[])
{
    int i=0;
    while(orig[i] != ' '){
        dest[i]=orig[i];
        i++;
    }
    dest[i]='\0';

}



void SubString1(char orig[], char dest[]){
    int i=0, j=strlen(orig);
    while(orig[j] != ' ')
        j--;
    j++;
    while(orig[j] != '\0'){
        dest[i]=orig[j];
        j++;
        i++;
    }
    dest[i]='\0';
}



int main(){
    char Nome[101], PrimNome[36], UltNome[36];

    scanf("%[^\n]", Nome);

    SubString1(Nome, UltNome);
    printf("%s, ", UltNome);

    SubString(Nome, PrimNome);
    printf("%s\n", PrimNome);

    return 0;
}

