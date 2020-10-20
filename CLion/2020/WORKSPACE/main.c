#include <stdio.h>
#include <stdlib.h>
#include "CallFunctions.h"

//ARQ Ficha 2- Ex.5
int main(int argc, char *argv[])
{
    function;
}

int function(){
    int vetor[20];
    int n,i, somaPar = 0, somaImpar=0,  temp;
    scanf("%d", &n);
    if(n>20)
        return 1;
    for (int i = 0; i  != n; i++) {
        scanf("%d",&temp);
        vetor[i] = temp;
        }
    for (i = 0; i < n; i= i+2){
        somaPar += vetor[i];
    }
    for (i = 1; i < n; i = i+2){
    somaImpar += vetor[i];
    }
    printf("A soma e %d", (somaPar - somaImpar));
    return 0;
}