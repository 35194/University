#include <stdio.h>
#include <stdlib.h>

typedef struct listagem
{
    int linhas,colunas,valor;
    struct listagem *N,*NW,*NE,*S,*SE,*SW,*W,*E;
}LISTA;

typedef struct Matriz
{
    int t;
    LISTA *pfirst;
}MATRIZ;

typedef struct fila
{
    MATRIZ *matriz;
    struct fila *primeiro,*seguinte,*ultimo;

}FILA;

FILA * init_fila(int filas)
{
    FILA *prim = malloc(sizeof(FILA));
    if (filas==0 ){
        printf("Dimensões inválidas\n");
        return NULL;
    }
    FILA *seg = malloc(sizeof(FILA));
    FILA *ult = malloc(sizeof(FILA));
    prim->primeiro=prim;
    seg->primeiro=prim;
    ult->ultimo=ult;
    seg->ultimo = ult;
    ult->primeiro=prim;
    prim ->ultimo = ult;
    if (filas == 1) {
        prim->seguinte = NULL;
        prim->ultimo = ult;
        return prim;
    }
    for (int i = 0; i < filas; i++)
    {
        seg->primeiro=prim;
        seg->ultimo = ult;

    }
}
MATRIZ * init_matrix(int size){
    MATRIZ *p = malloc(sizeof(MATRIZ));
    if (size==0 ){
        printf("Dimensões inválidas\n");
        return NULL;
    }
    p->t=size;
    LISTA *auxS=NULL;
    LISTA *auxE=NULL;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            LISTA *temp=(LISTA *)malloc(sizeof(LISTA));
            temp->linhas=i;
            temp->colunas=j;
            temp->valor=0;
            temp->N=NULL;
            temp->NE=NULL;
            temp->E=NULL;
            temp->SE=NULL;
            temp->S=NULL;
            temp->SW=NULL;
            temp->W=NULL;
            temp->NW=NULL;

            // Primeira célula
            if (i==0 && j==0){
                p->pfirst=temp;
                auxS=p->pfirst;
                auxE=p->pfirst;
            }
            // Células na primeira coluna
            if (i>0 && j==0){
                temp->N=auxS;
                auxS->S=temp;
                temp->NE=auxS->E;
                if (auxS->E!=NULL){
                    auxS->E->SW=temp;
                }
                auxS=auxS->S;
                auxE=auxS;
            }
            // Restantes células
            if (j>0){
                temp->W=auxE;
                auxE->E=temp;
                temp->NW=auxE->N;
                if (auxE->N!=NULL){
                    auxE->N->SE=temp;
                }
                temp->N=auxE->NE;
                if (auxE->NE!=NULL){
                    auxE->NE->S=temp;
                    temp->NE=auxE->NE->E;
                    if(auxE->NE->E!=NULL){
                        auxE->NE->E->SW=temp;
                    }
                }
                auxE=auxE->E;
            }
        }
    }
    return p;
}
void printMatrix(MATRIZ *p) {
    int i = 0, j = 0, M = p->t;
    LISTA *a = p->pfirst, *a2 = a;
    for (i = 0; i < M && a != NULL; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%d ",a->valor);
            a=a->E;
        }
        a2 = a2->S;
        a = a2;
        printf("\n");
    }
}

void printFicheiro(MATRIZ *p, char *fn) {
    FILE *fp = fopen (fn, "r");
    if (fp == NULL) {
        printf("Erro na abertura do ficheiro\n");
        return;
    }
    int i = 0, j = 0, M = p->t;
    LISTA *a = p->pfirst, *a2 = a;
    fscanf(fp,"%d",&p->t);
    for (i = 0; i < M && a != NULL; i++)
    {
        for (j = 0; j < M; j++)
        {
            fscanf(fp, "%d ",&a->valor);
            a=a->E;
        }
        a2 = a2->S;
        a = a2;
    }
}

int main(int argc, char *argv[])
{
    printMatrix(init_matrix(9));
}
/*
int dentro_diag_prin(int mat[M][M], int num)
{
    if (row != col)
        return 0;
    for (int row = 0; row < M; row++)
        for (int col = 0; col < M; col++)
        {
                if(mat[row][col] == num)
                    return 1;
        }
    return 0;
*/

int dentro_diag_prin(MATRIZ *p, int lin, int col, int num)
{
    if (lin != col)
        return 0;
    LISTA *l = p->pfirst;
    for (int i = 0; i < p->t; i++) {
        if (l->valor == num)
            return 1;
        else
            l = l->SE;
    }
    return 0;
}

int dentro_diag_sec(MATRIZ *p, int lin, int col, int num)
{
    if (col != p->t-1-lin)
        return 0;
    LISTA *l = p->pfirst;
    for (int i = 0; i < p->t; i++) {
        l = l->E;
    }
    for (int i = 0; i < p->t; i++) {
        if (l->valor == num)
            return 1;
        else
            l = l->SW;
    }
    return 0;
}