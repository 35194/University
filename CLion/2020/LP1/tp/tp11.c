#include "tp11.h"
#include "tp09.h"
#include "stdlib.h"
#include "stdio.h"

int main_tp11(int argc, const char * argv[]) {
    CLASSSTUDENTS  turma_Lp1={"LP1", NULL, 0};
    create_dynarray_classstudents(&turma_Lp1, 4);
    insert_student_dynarray_classstudents(&turma_Lp1, "Joao Ribeiro", 1111, 0.0f);
    insert_student_dynarray_classstudents(&turma_Lp1, "Jose Silva", 2222, 0.0f);
    insert_student_dynarray_classstudents(&turma_Lp1, "Diogo Ferreira", 3333, 0.0f);
    print_dynarray_classstudents(turma_Lp1);

    return 0;
}

void create_dynarray_classstudents(CLASSSTUDENTS *pcs, int initsize){
    STUDENT *pstudents = (STUDENT*) calloc(initsize, sizeof(STUDENT));
    pcs->pstudents=pstudents;
    (*pcs).nstudents=initsize;
}

void insert_student_dynarray_classstudents(CLASSSTUDENTS *pcs, char name[], int number, float grade){
    int i = 0;
    STUDENT *pstudent = pcs->pstudents;
    for (i = 0; i < pcs->nstudents; i++){
        if(pstudent->pname==NULL){
            pstudent->pname =(char *) malloc(strlen(name)+1);
            strcpy(pstudent->pname,name);
            pstudent->number=number;
            pstudent->grade=grade;
            return;
        }
        pstudent++;
    }
    if(i==pcs->nstudents){
        int old_size = pcs->nstudents, new_size= old_size + 10;
        pcs->pstudents=realloc(pcs->pstudents, new_size*sizeof(STUDENT));
        //pcs->nstudents=new_size; ???????????????
        //pstudent=pcs->pstudents+old_size; ??????????????
        for(i = old_size; i < new_size; ++i) {
            pstudent->pname = NULL;
            pstudent->number=0;
            pstudent->grade=0.0f;
            //pstudent++; ?????????????
        }
        pstudent = pcs->pstudents + old_size;
        pstudent->pname =(char *) malloc(strlen(name)+1);
        strcpy(pstudent->pname,name);
        pstudent->number=number;
        pstudent->grade=grade;
    }
}

void print_dynarray_classstudents(CLASSSTUDENTS cs){
    STUDENT *pstudent = cs.pstudents;
    for (int i = 0; i < cs.nstudents; i++){
        if(pstudent->pname != NULL) {
            printf("print_dynarray_classstudents(): student[%d] = %s, %d, %0.01f\n", i, pstudent->pname,
                   pstudent->number, pstudent->grade);
            pstudent++;
        } else return;
    }
}

STUDENT remove_student_dynarray_classstudents(CLASSSTUDENTS *pcs, char name[]){
    STUDENT st = {NULL, 0, 0.0f};
    STUDENT  *pst = find_student_dynarray_classstudents(*pcs, name);

    if( pst != NULL){
        st = *pst;
        while (pst < (pcs->pstudents + pcs->nstudents-1) && pst->pname != NULL){
            *pst = *(pst+1);
            pst++;
        }
        if( pst == pcs -> pstudents + pcs-> nstudents-1) {
            pst->pname = NULL;
            pst->number = 0;
            pst-> grade = 0.0f;
        }
    }
    return st;
}



STUDENT* find_student_dynarray_classstudents(CLASSSTUDENTS cs, char name[]){
    STUDENT  * pst = cs.pstudents;

    if(pst == NULL){
        printf("find_student_dynarray_classstudents\n", cs.name);
        return  pst;
    }
  for (int i = 0; (i < cs.nstudents && pst-> pname != NULL && strcmp(pst-> pname, name) != 0); i++){
      pst++;
  }
  return (pst-> pname != NULL && strcmp(pst->pname, name) == 0 ? pst : NULL);
}




void free_dynarray_classstudents(CLASSSTUDENTS *pcs){
    STUDENT * pst = pcs->pstudents;
    if(pst == NULL){
        printf("free_dynarray_classstudents", pcs->name);
        return;
    }
    for (int i= 0; i < pcs -> nstudents; i++){
        free(pst->pname);
    }
    free(pcs->pstudents);
}







