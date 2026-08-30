#include <stdio.h>
#include <string.h>
#include <ctype.h>

int CompVog(char Letra){
    char Vogais[5]={'A','E','I','O','U'};
    for(int i=0; i<5; i++){
        if(Letra==Vogais[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    char Palavra[67], Caracter;
    int NumVog=0;

    scanf("%[^\n]", Palavra);
    scanf(" %c", &Caracter);

    for(int i=0; i<strlen(Palavra); i++){
        if(CompVog(toupper(Palavra[i]))==1){
            Palavra[i]= Caracter;
            NumVog++;
        }
    }
    printf(": %i \n: %s ", NumVog, Palavra);

    return 0;
}
