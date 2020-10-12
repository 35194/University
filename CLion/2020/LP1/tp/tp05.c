#include "tp05.h"
#include "tp03.h"
int main_tp05(int argc, const char * argv[]){
    print_multable_recursive(3,10);
}


int index_first_vogal(char str[]){
    int i = 0;
    while (str[i] != '0'){
        if( isVowel(str[i])){
            return i;
        }
        i++;
    }
    return -1;
}

char* replace_char_by_char(char str[], char o, char r){
    for ( int i = 0; str[i] != '\0'; i++){
        if (str[i] == 0)
            str[i] = r;
    }
    return str;
}
/*
char* remove_blanks(char str[]){ //To finish
    for (int i = 0; str[i] != '\0'; i++) {
        if (isWhite(str[i]))
        {
            int size = strlen(str);
            for (int k = i;k <= size; k++)
        }
    }
} */

int numberOfDigitsRecursive (int n){

    if(n < 10){
        return 1;
    }
    //Chama recursiva
    return 1+ numberOfDigitsRecursive(n/10);

}

void print_multable_recursive(int n, int level){
    if ( level == 1){
        printf("%d * %d = %d\n", n, level, n*level);
        return;
    }
    print_multable_recursive(n, level -1);
    printf("%d * %d = %d\n", n, level, n*level);
}

void print_matrixNx100(int mNx100[][MAXCOLS100], int lin, int col){
    for ( int line = 0; line < lin; line++)
    {
        for (int columns = 0; columns < col; columns++){
            printf("%d\t", mNx100[line][columns])
        }
    }
}