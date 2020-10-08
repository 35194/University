#include <stdio.h>
#include "pr01.h"

int main_pr01(int argc, const char *argv[]) {
     //printAsciiTableLetters();
     //int countInsertedChar(char c);
     printPrimeNumbers(2, 30);
    }

void printAsciiTableLetters(void){
    for (int i = 'A'; i < 'Z'; i++){
        printf("%c \t %d", (char) i, i);
    }
}
/*void printDigitOrNot(void){
//ciclo
while ((c = getchar()) != '.'){
        //verify
        fflush(stdin);
}
//if digito
    //printf ("digito");
//else
    //print(Not");
} */


 /*float intDecimFloat (int a, int b){
    printf("%..3f", 5/(float)2);
    return (float a / b);
}*/

void printPrimeNumbers(int min, int max){
    int count = 0;
   for (int i = min; i < max; i++){
       // ? if (i <= 1) continuar ?
       for (int j = 2; j <= i/2; j++){
           if (i % j == 0)
               count++; }
   }
   if (count == 1) {
       printf("Primo.\n");}
   else {
        printf("Nao e primo\n");  }
}
