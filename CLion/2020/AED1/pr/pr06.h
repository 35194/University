#ifndef AED1_PR06_H
#define AED1_PR06_H
#define  STRING_END_CHAR -1
#define CHAR_8BIT_RADIX 256
#include "pr04.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../libs_src/lib_util.h"


typedef struct {
    StringElementsArray s;
    int *index;

}StringElementsArrayIdx;

void createStringElementsArrayIdx(StringElementsArrayIdx * a, int N);
int msd_sort_whithout_cutoff(StringElementsArrayIdx *a, StringElementsArrayIdx *aux, int lo, int hi, int d, int R);
int charAt(StringElementsArrayIdx * a, int i, int d);

/*
 * 1) criacao array sufix
 * 2) Ordenacao array (MSD)
 */
void sa_createSufixArray(char * text, StringElementsArrayIdx * sa, int R);
void suffixArrayClient();
int main_pr06(int argc, char * argv[]);
int* my_str_str(char*txt, char*pat);
int KMP();
#endif //AED1_PR06_H
