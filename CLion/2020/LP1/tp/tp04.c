#include "tp04.h"
#include "tp03.h"
#include <stdio.h>


//ToDo: double factorial_recursive(int n);  void print_vowels(char c[], int size);
//ToDo: float mean(int ints[], int size); int count_segments_repeated_ints(int v[], int sizev, int p[], int sizep);

int main_tp04(int argc, const char *argv[]) {
    //numberOfDigitsRecursive1(6594);
    printf("Resposta = %d", multiply_recursive(4,2));
   return 1;
}

int numberOfDigitsRecursive1(int a) {
    if (a / 10 != 0) {
        printf("%d", (a % 10));
        a /= 10;
        numberOfDigitsRecursive1(a);
        printf("%d", a);

    } else
        (printf("%d)", a));
    return 1;
}

int read_vowels(char vowels[], int size) {
    int x = 0;
    for ( int i = 0; i < size; i++){
        scanf("%c", &vowels[i]);
        if(vowels[i] == '.'){
            return i;
        }
    if( isVowel(vowels[i])){
        continue;
    }
    }
}
//ToDo:------------------------------------------------------------------------------------------------------------------
double multiply_recursive(int a, int b){ //Not working.

    if ( a == 0 || b == 0){
        return 0;
    } else{ a*b;
        if ( a > b){
          return a + multiply_recursive(a, (b-1));
        } else {
          return b + multiply_recursive((a-1), b);
        }
    }
}

int max(int ints[], int size)
{
    int maior = ints[0];
    for (int i = 1; i<size;i++)
    {
        if ( ints[i] > maior)
        {
            maior = ints[i];
        }
    }
    return maior;
}
int min(int ints[], int size){
    int menor = ints[0];
    for (int i = 1; i<size;i++)
    {
        if ( ints[i] > menor){
            menor = ints[i];
        }
    }
    return menor;
}

void print_multable_recursive(int n, int level){
    if ( level == 1){
        printf("%d * %d = %d\n", n, level, n*level);
        return;
    }
    print_multable_recursive(n, level -1);
    printf("%d * %d = %d\n", n, level, n*level);
}