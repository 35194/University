//
// Created by plane on 23/10/2020.
//

#include "pr05.h"

//ToDo: TPC- Funcoes media, moda e mediana

int main_pr05(int argc, const char * argv[]){
   // int x = 5, y = 7;
    //printf("x = %d, y = %d\n", x,y);
    //swap_pxy(&x, &y);
    //printf("x = %d, y = %d\n", x,y);
    quadratic_formula(5,4,3);
    quadratic_formula_Professor(5,4,3);
}

void swap(int x, int y) {
    int aux = x;
    x = y;
    y = aux;
}

void swap_pxy(int* px, int* py){
    int aux = *px;
    *px = *py;
    *py = aux;
}

void quadratic_formula(int a, int b, int c){
    int InsideRoot = 0, Answer = 0;
    InsideRoot = sqrt(b^2-4*a*c);
    if (InsideRoot < 0){
        InsideRoot = (-b - InsideRoot) / 2*a;
        Answer = InsideRoot;
    } else if (InsideRoot > 0){
        InsideRoot =  (-b + InsideRoot) / 2*a;
        Answer = InsideRoot;
    }
    printf("Answer is: %d\n",Answer);
}

void quadratic_formula_Professor(int a, int b, int c) {
    int * n1 = 0;
    *n1 = (-b+sqrt(b^2-4*a*c))/(2*a);
    printf("Answer is: %d\n", n1);
}

void print_array_double_without_index(double *pi, int size){
    double * p_aux = pi;
    while ((p_aux-pi) < size){
        printf( "%f\n",*p_aux);
        p_aux++;
    }
}

void alphabet(void){
    char alph[ALPHABET_LETTERS];
    char * p_aux = alph;
    for (int i = 0; i < ALPHABET_LETTERS; i++){
        *(alph+i) = 'A' +i;
    }
    while((p_aux - alph < ALPHABET_LETTERS)){
        printf("%c ", *(p_aux++));
    }
}

double *swap_double_array_ptr(double *pi, int pos1, int pos2) {
    double aux = *(pi + pos1);
    *(pi + pos1) = *(pi + pos2);
    *(pi + pos2) = aux;
    return pi;
}