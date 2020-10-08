#include "tp02.h"

void printPrimitiveDataTypesSizeLimits(void) {

    int bits = 0, bytes = 0;
    double limit = 0.0;
    bytes = sizeof(char);
    bits = 8 * bytes;
    limit = pow(2, bits - 1);
    printf("Char: %d/t %d/t %0.0f/n", bytes, bits, limit);
}

int checkIfLetter(char c) {
    if( (c >= 'a' && c<= 'z')){
        return 1;
    }
}

void guessSecretChar(){

    char secretChar = '\0';
    char guessChar = '\0';
    int countGuesses= 0;
    do{
        printf("...\n");
        scanf(" %c", &secretChar);
        if(checkIfLetter(secretChar)){break;}
    }while(1);
}

int main_tp02(int argc, const char *argv[]) {
    //printPrimitiveDataTypesSizeLimits();
    int checkIfLetter(char c);
     guessSecretChar();
}