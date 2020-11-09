#include <stdio.h>
#include <stdlib.h>
#include "CallFunctions.h"

//ARQ Ficha 2- Ex.6
int main(int argc, char *argv[])
{
    function;
}

int function()
{
    int i, n = 0, soma = 0, temp = 0;
    scanf("%d", &n);
    for ( i = n; i  != 0; i--) {
        scanf("%d",&temp);
        if(temp > 0) {
            soma += temp;
        }
    }
    printf("%d", soma);
    return 0;
}





