#include "pr06.h"

int main_pr06(int argc, const char * argv[]) {
    char str[]={"OLA"};
   cat_argv_strings(argc-1,argv+1,str);
}


void print_received_args(int argc, const char *argv[]){

    for(int i = 0; i < argc;i++){
        printf("%s",*(argv+i));
    }
}

int sum_all_args(int argc, const char *argv[]){
    int sum = 0;;
    for(int i=0; i < argc; i++){
        sum+=atoi(*(argv+i));
    }
}

int calculator_command_line(int argc, const char *argv[]){
    int valor=0;
    int a = atoi(argv[1]);
    int b = atoi(argv[3]);
    if(strcmp("PLUS", argv[2])==0){
        return a+b;
    }
    if(strcmp("MINUS", argv[2])==0) {
        return a - b;
    }
    if(strcmp("DIVIDE", argv[2])==0) {
        return a / b;
    }
    if(strcmp("MULTIPLY", argv[2])==0) {
        return a * b;
    }
}

char* string_cat(const char *pstr1, const char *pstr2, char str[]){
    int i = 0;
    for(i=0; pstr1[i] != '\0'; i++)
        str[i] = pstr1[i];
    for(int j = 0; pstr2[j] != '\0'; j++, i++){
        str[i] = pstr2[j];
    }
    return str;
}

char* cat_argv_strings(int argc, const char *argv[], char str[]){
    for(int i = 0; i < argc; i++)
    {
        string_cat(str, argv[i], str);
    }
}

int frequencies_strings_argv(int argc, const char *argv[], int freqs[]){

}