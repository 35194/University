//
// Created by Bruno on 22/10/2020.
//

#include "pr04.h"
#include "../libs_src/lib_util.h"

int keys_a[] = {3,2,3,1,2,3,2,3,3,1};
char * string_a[] = {"Ana","Carlos","Daniela","Filipe","Hugo","Luis","Manuel","Pedro","Ricardo","Rui"};
int i = 0;
int j;
int z;
int count=0;
int d =0;





int main_pr04(int argc, char * argv[]) {
    //worksheet3E1();
    lsd_sort_client();



    return 0;
}


void worksheet3E1 (void) {
StringElementsArray a;

createStringElementsArrayAndFill(&a,N,string_a);

    while(j<10){
        printf("%s,%d\n", string_a[j], keys_a[j]);
        j++;
    }

    key_index_counting(&a,keys_a,KEY_INDEX_RADIX);

    while(z<10){
        printf("%s,%d\n", a.str[z], keys_a[z]);
        z++;
    }



}

void createStringElementsArray(StringElementsArray * si, int N) {
    si->N = N;
    si->str = (char **) malloc(sizeof(char *)*N);
    si->len = (int *) malloc(sizeof(int)*N);
}

void key_index_counting(StringElementsArray * a, int * keys, int R) {
    int i,r,c;
    int N = a->N;
    int * count = newIntArray(R + 1);
    for (i = 0; i < R + 1; i++)
        count[i]=0; // reset count[] array
    StringElementsArray aux; // aux Array
    createStringElementsArray(&aux,N); // create aux array
    int * aux_keys = newIntArray(N);

    // compute frequency counts
    for (i = 0; i < N; i++)
        count[keys[i]]++;

    // transform counts to indicies
    for (r = 0; r < R; r++)
        count[r+1] += count[r];

    // distribute
    for (i = 0; i < N; i++) {
        c = keys[i] - 1;
        aux.str[count[c]] = a->str[i];
        aux.len[count[c]] = a->len[i];
        aux_keys[count[c]] = keys[i];
        count[c]++;
    }

    // copy back
    for (i = 0; i < N; i++) {
        a->str[i] = aux.str[i];
        a->len[i] = aux.len[i];
        keys[i] = aux_keys[i];
    }

    freeIntArray(count);
    freeIntArray(aux_keys);
    freeStringElementsArray(&aux);
}

void createStringElementsArrayAndFill(StringElementsArray * si, int N, char ** strings){
    int i;
    createStringElementsArray(si, N);
    for (i = 0; i < N; i++) {
        si->str[i] = strings[i];
        si->len[i] = (int)strlen(strings[i]);
        //printf("ola\n");
    }

}

void freeStringElementsArray(StringElementsArray * si) {
    free(si->str);
    free(si->len);
    return;
}

lsd_sort_client(){

    char*strings[]={"fab","fba","abc","eca","bbf","eba","bca","caa","cca","bfb","fbc","aaa"};
    int N=12;
    int String_width=3;
    int radix = 128;
    StringElementsArray a;
    createStringElementsArrayAndFill(&a,N,strings);
    lsd_sort(&a,String_width,radix);



}

void lsd_sort(StringElementsArray *a,int W,int R) {
    int N=12;
    int*count

    for(int i=0;i<a->N;i++){
        count[a->N[i][d] + 1]++;

        }
        for (int i = 0; i <= R; i++) {
            count[i + 1] += count[i];
        }
            for() {

                for (int i = 0; i < N; i++)
                    int c =
                int a->str[i][d];
                aux.str[count[c]] = a->str[i];
                aux.len[count[c]] = a->len[i];
                count[c]++;
            }
                for(int i=0;i<N;i++){
                    a->str[i]=aux.str[i];
                    a->len[i]=aux.len[i];
                }


}






