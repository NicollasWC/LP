#include <stdio.h>

int triangular(int n){
    if(n==1)
        return 1;
    else
        return triangular(n-1) + n;
}

void pontos(int n){
    if(0 == n)
        return;

    for(int cont1 = 0; cont1 < n; cont1++)
        printf(".");

    printf("\n");
    pontos(n-1);
}

int main(){
    int n;

    scanf("%d",&n);

    printf("%\n", triangular(n));

    pontos(n);
    }
