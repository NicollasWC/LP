#include <stdio.h>

int busca (int *v, int n){
    if (*v==n)
        return 0;
    else
        return busca(v+1, n)+1;
}

int main(){
    int v[10]={1,2,3,4,5,6,7,8,9,10}, i=6;

    printf("%i", busca(v,i));

    return 0;
}
