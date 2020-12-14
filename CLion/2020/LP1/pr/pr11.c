#define MAX50 50
typedef struct student{
    char *pname;
    int number;
    float grade;
    struct student* pnext;
} STUDENT;

typedef struct classstudents{
    char name[MAX50];
    STUDENT *pstudents;
    int nstudents;
} CLASSSTUDENTS;

#include "pr11.h"
int main_pr11(int argc, const char argv[]){
    CLASSSTUDENTS turma={"LP1", 0, NULL};
    insert_student_ordered(&turma, "A", 16.0, 1);
}
void insert_student_ordered(CLASSSTUDENTS*cs, char*nome, float grade, int number){
    STUDENT *pcurrent=cs->pstudents, *pont=NULL;
    STUDENT *s=(STUDENT*)malloc(sizeof(STUDENT));
    s->grade=grade;
    s->number=number;
    strcpy(s->pname, nome);
    s->pnext=NULL;
    if(cs->pstudents==NULL){
        cs->pstudents=s;
        cs->nstudents++;
        return;
    }
    while(pcurrent!=NULL && strcmp(nome, pcurrent->pname)>0){
        pont=pcurrent;
        pcurrent=pcurrent->pnext;
    }
    if(pcurrent==cs->pstudents){ // Head(?)
        s->pnext=pcurrent;
        cs->pstudents=s;
        cs->nstudents++;
        return;
    }
    if(pcurrent==NULL){ // Tail(?)
        pont->pnext=s;
        cs->nstudents;
        return;
    }
    pont->pnext=s;
    s->pnext=pcurrent;
}
void remove_student_ordered(CLASSSTUDENTS *pcs, char name[]){
    if(pcs->pstudents==NULL){ // Empty
        return;
    }
    STUDENT *pont=NULL, *pcurrent=pcs->pstudents;
    while (pcurrent!=NULL && strcmp(pcurrent->pname, name)!=0){
        pont=pcurrent;
        pcurrent=pcurrent->pnext;
    }
    if(pcurrent==NULL){
        return;
    }
    if(pont==NULL){ // Head
        pcs->pstudents=pcurrent->pnext;
        free(pcurrent);
        pcs->nstudents--;
        return;
    }
    pont->pnext=pcurrent->pnext; // Middle/Tail
    free(pcurrent);
    pcs->nstudents--;
    return;
}