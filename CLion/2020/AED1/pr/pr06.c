#include "pr06.h"

int main_pr06(int argc, char * argv[]){
    KMP();
}



void createStringElementsArrayIdx(StringElementsArrayIdx * a, int N){
    a->s.N = N;
    a->s.str = (char **) malloc(sizeof(char *)*N);
    a->s.len = (int *) malloc(sizeof(int)*N);
    a ->index = (int*) malloc (sizeof(int) * N);
}

int msd_sort_whithout_cutoff(StringElementsArrayIdx *a, StringElementsArrayIdx *aux, int lo, int hi, int d, int R) {
    static int ordem_chamada_rec = 1;
    static int d_max = 0;
    int i, r, c;
    int *count = newIntArray(R + 2);

    //StringElementsArray aux;
    createStringElementsArrayIdx(aux, a->s.N);

    // reset count[] array
    for (i = 0; i < R + 2; i++)
        count[i] = 0;

    if (hi <= lo) return d_max;


    //if (hi - lo <= cutoff_value) insertion_sort();

    // compute frequency counts
    for (i = lo; i <= hi; i++) {
        c = charAt(a, i, d);
        count[c + 2]++;
    }

    // transform counts to indicies
    for (r = 0; r < R + 1; r++)
        count[r + 1] += count[r];

    // distribute
    for (i = lo; i <= hi; i++) {
        c = charAt(a, i, d);
        aux->s.str[count[c + 1]] = a->s.str[i];
        aux->s.len[count[c + 1]] = a->s.len[i];
        aux->index[count[c + 1]] = a->index[i];
        count[c + 1]++;
    }

    // copy back
    for (i = lo; i <= hi; i++) {
        a->s.str[i] = aux->s.str[i - lo];
        a->s.len[i] = aux->s.len[i - lo];
        a->index[i] = aux->index[i - lo];
    }

    // Trace of recursive calls for MSD string sort (version with no cutoff for small subarrays used!)
    printf("\n-------------\nMSD Sorted List (left to right) after iteration (lo,hi,d,ordem)= %d,%d,%d,%d:\n", lo, hi,
           d, ordem_chamada_rec++);
    for (i = lo; i <= hi; i++)
        printf("\t%s\n", a->s.str[i]);
    if (d > d_max) d_max = d;

    // recursively sort for each character
    for (r = 0; r < R; r++)
        msd_sort_whithout_cutoff(a, aux, lo + count[r], lo + count[r + 1] - 1, d + 1, R);
    return d_max;
}

int charAt(StringElementsArrayIdx * a, int i, int d) {
    return (d < a->s.len[i]) ? (a->s.str[i][d]) : STRING_END_CHAR;
}

void sa_createSufixArray(char * text, StringElementsArrayIdx * sa, int R){
    int N = strlen(text);
    createStringElementsArrayIdx(sa, N);
    //Parte 1)
    for(int i = 0; i < N; i++){
        sa-> s.str[i] = text + i;
        sa -> s.len[i] = N - i;
        sa -> index[i] = i;
    }
    //Parte 2)
    StringElementsArrayIdx aux;
    createStringElementsArrayIdx(&aux, N);
    msd_sort_whithout_cutoff(sa,&aux, 0, N-1, 0, R);
}
int* my_str_str(char*txt, char*pat){
    char* ret; int* v = (int*) malloc(sizeof(int)* strlen(txt));
    char*p = txt; int i = 0;
    while ((ret=strstr(p, pat)) !=  NULL){
        *(v + i++) = (ret-txt);
        p+= (ret-txt) +1;
    }
}

void suffixArrayClient(){
    char text[]="aacaagtttacaagc";
    StringElementsArrayIdx  sa;
    sa_createSufixArray(text, &sa,CHAR_8BIT_RADIX);
    for (int i = 0; i < sa.s.N;i++){
        printf("%d\t%s\n", sa.index[i], sa.s.str[i]);
    }
}

int KMP(){
    char pat[] = "ABAAC";
     int R = 3;
     int M = strlen(pat);
     int dfa[3][5] = {0};
     dfa [pat[0] -'A'][0] = 1;
    for (int X = 0, j = 1; j < M; j++)
    {
        for (int c = 0; c < R; c++) {
            dfa[c][j] = dfa[c][X];
        }
        dfa[pat[j]-'A'][j] = j+1;
        X = dfa[pat[j]- 'A'][X];
    }
    for (int i = 0; i < R; i++){
        for (int j = 0; j < M; j++){
            printf("%d ", dfa[i][j]);
        }printf("\n");
    }
}