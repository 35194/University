#include "tp03.h"
#include <stdio.h>

int main_tp03(int argc, const char *argv[]) {
    char c = 'B';
    printf("O Char %c e uma consoante %d\n", c, (isConsonant(c)? "sim" : "NAO"));
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

int countWordsStdin(void){
    char c = '\0';
    int wordCount = 0;
    int isInside = 0;
    while ( (c = getchar()) != '\n'){
        if(isWhite(c) && isInside ==1 ){
            wordCount++;
            isInside = 0;
        }
        else if(!isWhite(c) && isInside==0){
            isInside = 1;
        }
    }
    printf("Foram inseridas %d palavras",wordCount);
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