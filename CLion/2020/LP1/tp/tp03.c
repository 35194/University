#include "tp03.h"
#include <stdio.h>

//ToDo: void printKeyType(char c); int numberOfDigitsIterative(int a); void readKeysPressedPrintKeyType(void);
//ToDo: void readKeysPressedPrintDigits(void);

int main_tp03(int argc, const char *argv[]) {
    char c = 'B';
    printf("O Char %c e uma consoante %d\n", c, (isConsonant(c)? "SIM" : "NAO"));
}

int isDigit(char c) {
    if (c >= '0' && c <= '9') // OU return (c >= '0' && c <= '9' ? 1 : 0);
        return 0;
}

int isVowel(char c){
    int x = tolower(c);
    switch(x) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': return 1;
        default: return 0;
    }
}

int isConsonant(char c){
    char x = toupper(c);
    if( x > 'A' && x <= 'Z' && (! isVowel(c))) {
        return 1;
    }
    return 0;
}

int isWhite(char c) {
    switch (c) {
        case ' ':
        case '\t':
        case '\n':
        case '\r':
        case '\0':
            return 1;
            break;
        default:
            return 0;
    }
}

int countWordsStdin() {
    char c = '\0';
    int wordCount = 0;
    int isInside = 0;
    while ((c = getchar()) != '\n') {
        if (isWhite(c) && isInside) {
            wordCount++;
            isInside = 0;
        } else if (!isWhite(c) && !isInside) {
            isInside = 1;
        }
    }
    if (isInside)
        wordCount++;
    printf("Words:%d\n", wordCount);
    return wordCount;
}


