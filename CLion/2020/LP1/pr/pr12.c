#include "pr12.h"

int main_pr12(int argc, const char argv[]){
    char fn;
    CLASSSTUDENTS cs={"LP1", NULL, 0};
    read_students_txt(&cs, ".../data/pr12.txt");
    //print_students(cs);
    //insert_student_ordered();
    //print_students(cs);
    //save_students_txt(cs, fn);
    return 0;
}
void read_students_txt(CLASSSTUDENTS *pcs, char fn[]){
    int nstd=0;
    char name[100], sname[100];
    int num=0;
    float grade=0.0;
    FILE*fp;
    fp=fopen(fn,"r");
    if(fp!=NULL){
        fscanf((FILE *) "%*s %*s %s", pcs->name);
        fscanf((FILE *) "%*s %*s %*s %d", (const char *) &nstd);

        for(int i=0; i<nstd; i++){
            fprintf(fp,"%s %s %d %.1f", name, sname, &num, &grade);
           // sname[strlen(sname)-1='\0'];
            sprintf(name, "%s $s", name, sname);
           // insert_student_ordered(pcs, name, grade, num);
        }
        fclose(fp);
    }
}
void save_students_txt(CLASSSTUDENTS cs,char *fn){
    FILE *fp;
    fp=fopen(fn, "w");
    if(fp!=NULL){
        fprintf(fp, "Class Name: %s\n", cs.name);
        fprintf(fp, "Number of Students: %d\n", cs.nstudents);
        STUDENT *s=cs.pstudents;
        while (s!=NULL){
            fprintf(fp, "%s, %d, %.1f", s->pname, s->number, s->grade);
            s=s->pnext;
        }
        fclose(fp);
    }
}
// TPCQNVF - read e write sem usar o header nstudents