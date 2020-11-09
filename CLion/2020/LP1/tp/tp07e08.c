#include "tp07e08.h"

int main_tp07e08(int argc, const char * argv[]){
    char m1[MAX128][MAX128];
    char m2[MAX128][MAX128];
    //count_consonants(argc,argv,m1,m2);
    int **ppi = create_dynmatrix_ints(5,6);
    print_dynmatrix_ints(ppi,5,6);
}

void count_consonants(int c, const char *astr[], char strings[][MAX128], char consonants[][MAX128]){
    for (int lin = 0; lin < c; lin++){
        strcpy(strings[lin], astr[lin]); //Copiar array original para novo array
        int k = 0;
        for (int col = 0; col < strlen(strings[lin]); col++){
            if (isConsonant(strings[lin][col])){
                consonants[lin][k]= strings[lin][col]; k++;
            } consonants[lin][k++]='\0';
        }  printf("Consonants[%d] = [%s]->%d\n",lin, consonants[lin],k);
    }
}

//ToDo:TPC-- Funcao recebe "prog aa bbb aa aa" -> Funcao imprime os nao repetidos (prog aa bbb) + fazer void set_dynmatrix_ints

int** create_dynmatrix_ints(int lines, int columns){
    int** ppi = NULL;
    ppi = (int**)malloc(sizeof(int*)*lines);
    for(int l = 0; l < lines; l++){
      int * p =  malloc(sizeof(int) * columns);
        *(ppi + l) = p;
    } return ppi;
}

void print_dynmatrix_ints(int **ppints, int lines, int columns){
    for (int lin = 0; lin < lines; lin++){
        for(int col = 0; col < columns; col++){
            printf("|%d|\t", *(*(ppints+lin) +col));
        } printf("| |\t\n");
    }
}

void free_dynmatrix_ints(int **ppints, int lines, int columns){
    for (int lin = 0; lin < lines; lin++) {
        //FREE de cada int*:
        int *p = *(ppints + lin);
        free(p);
    }
    //FREE de cada int**:
    free(ppints);
}
