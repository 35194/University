#include "tp06.h"


//ToDo:  char* del_allsubstr(char *pstr, char *psub);
//ToDo: char* strcat_ptr2(char *pdest, char *porg);



int main_tp06(int argc, const char * argv[]){
    char str[]="OLA MEU OLA MUNDO, OLA";
    char sub[]= "OLA";
    printf("%s\n", del_substr(str,sub));
}

void double_xy(int x){
    x = 2 * x;
}

void double_pxy(int *px){
    *px = 2 * (*px);
}


int* double_array_ints_ptr(int* pi, int size){ //Usar *(pd + i)
    for (int i = 0; i < size ; i++){
        * (pi+i) = 2 * *(pi+i);
    }
}

char* del_substr(char *pstr, char *psub){
    for (int i = 0; *(pstr+i) != '\0' ;i++) {
        int k = 0;
        for (k; *(psub+k) != '\0';k++){
           if(*(pstr +i + k) == *(psub + k)) {
               continue;
           } else {break;}
        }
        if (k == strlen (psub)){ //OU if( *(psub+k) == '\0')
            int j = 0;
            for(j = i; *(pstr + j) != '\0' ;j++) {
                *(pstr + j) = *(pstr +j +k);
            } return pstr;
        }
    }
    return pstr;
}

//ToDo:-----------------------------------------------------------------------------------------------
char* strcat_ptr1(char *pdest, char *porg){
    int size1 = strlen(pdest);
    int i = 0, j = 0;
    for ( int i = size1, j = 0; *(porg + j) != '\0'; j++,  i++){
        *(pdest +i) = *(porg +j);
        j+ size1;
    }
}


//char* strcat_ptr2(char *pdest, char *porg){int s1 = strlen(porg);}

void print_array_ints_ptr(int* pi, int size){
    int * paux = pi;
    for(int i = 0; paux < (pi + size); i++){
        printf("a[%i] = %d\n", i, *paux);
        paux++;
    }
}