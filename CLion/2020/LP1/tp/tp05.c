#include "tp05.h"
#include "tp03.h"
#include "tp04.h"

//ToDo: void sum_lines_matrixesNx100(int mNx100[][MAXCOLS100], int lin1, int lin2, int lin3, int columns);

int main_tp05(int argc, const char * argv[]){
    print_multable_recursive(3,10);
}



char* remove_blanks(char str[]){ //To finish
    for (int i = 0; str[i] != '\0'; i++) {
        if (isWhite(str[i]))
        {
            //int size = strlen(str);
            //for (int k = i;k <= size; k++)
            for (int j = i; str[j] != '\0'; j++){
                str[j] = str[j+1];
            }
        }
    }   printf("%s \n", str);
        return &str[0];
}


int numberOfDigitsRecursive (int n){

    if(n < 10){
        return 1;
    }
    //Chama recursiva
    return 1+ numberOfDigitsRecursive(n/10);

}



void print_matrixNx100(int mNx100[][MAXCOLS100], int lin, int col){
    for ( int line = 0; line < lin; line++)
    {
        for (int columns = 0; columns < col; columns++){
            printf("%d\t", mNx100[line][columns]);
        }
    }
}

//ToDo:--------------------------------------------------------------------------------------------------
int index_first_vogal(char str[]){
    for (int i = 0; str[i] != '0'; i++){
        if( isVowel(str[i])){
            printf("%d\n", i);
            return i;
        }
    }
}

char* replace_char_by_char(char str[], char o, char r){
    for (int i = 0; str[i] != '\0'; i++){
        if(str[i] == o){
            str[i] = r;
        }
    }
}

char* remove_chars(char str[], char sub[]){
    for(int i = 0; i < str[i] != '\0'; ++i){
        if(str[i] == sub){
            str[i++] == str[i];
            printf("%s\n",str);
            return str;
        }
    }
}

int index_sub_left(char str[], char sub[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == sub[0]){
            for(int j = 1; sub[j] != '\0'; j++){
                if(str[i+j] == str[j]) {
                    printf("%d", i);
                    return i;
                }
            }
        }
    } return -1;
}

void read_matrixNx100(char mNx100[][NCOLUMNS], int lines, int columns){
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++) {
            printf("m[%d][%d] = %d\n", i, j, mNx100[j][i]);
        }
    }
}

void transposed_matrixNx100(int mNx100[][MAXCOLS100], int size){
    for(int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            mNx100[i][j] = mNx100[j][i];
        }
    }
}

void multiply_matrixNx100_line_by_scalar(int mNx100[][MAXCOLS100], int lines, int columns, int line, int scalar){
    printf("Matrix: \n");
    for(int i = 0; i < line; i++){
        for(int j = 0; j < columns; j++){
            if(i == lines){
                    printf("%d", mNx100[i][j] * scalar);
            }   else{
                    printf("%d",mNx100[i][j]);
            }
        }
    }
}
