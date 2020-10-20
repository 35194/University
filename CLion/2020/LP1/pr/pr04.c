#include "pr04.h"


int main_pr04(int argc, const char * argv[]) {
    char str[] = "Hello world";
    //print_hangman_recursive(6);
    greatest_word_string(str);
}

double pow_recursive(int b, int e){
    if( e == 0) return 1;
    return b * pow_recursive(b, e-1);
}

//ToDo:TPC -> Imprimir um numero por ordem mas com recursividade

void print_hangman_recursive(int level){
    if (level == 0) return;
        print_hangman_recursive(level-1);
    switch (level) {
        case 1 :
            printf("\\");
            break;
        case 2 :
            printf("O");
            break;
        case 3 :
            printf("/");
            break;
        case 4 :
            printf("\n |");
            break;
        case 5 :
            printf("\n/");
            break;
        case 6 :
            printf(" \\");
            break;
        default:
            break;
    }
}


int greatest_word_string (char str[]){
    int len = strlen(str);
    int max = 0, count = 0;
    for(int i = 0; i <= len; i++){
        if(isWhite1(str[i])){
            if(count > max)
                max = count;
            count = 0;
        }
        else count++;
    }  return max;
}

int isWhite1(char c) {
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





