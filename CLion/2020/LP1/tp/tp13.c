#include "tp13.h"

int main_tp13(int argc, const char * argv[]){
    char filename[]="...";
    CLASSSTUDENTS lp1 = { "LP1", NULL, 0};
    read_students_bin(&lp1, filename);
    //print_students(lp1);

}

void save_students_bin(CLASSSTUDENTS cs, char fname[]){
    FILE *fp = NULL;
    if ((fp == fopen(fname, "wb")) == NULL) {
        printf("...Erro...%s\n", &fname);
        return;
    }
    int size = strlen ( cs.name) +1;
    fwrite(&size, sizeof(size), 1, &fp);
    fwrite(cs.name,sizeof(char), size, fp);
    fwrite((cs.nstudents), sizeof(int), 1, fp);
    STUDENT * ps = cs.pstudents;
    for(int i = 0; i < cs.nstudents; i++){
        size = ps -> pname;
        fwrite(&size, sizeof(size), 1, fp);
        fwrite(ps->pname, sizeof(char), size, fp);
        fwrite(&(ps->number), sizeof(int),1,fp);
        fwrite(&(ps->grade), sizeof(float), 1, fp);
        ps = ps->pnext;
    }
    fclose(fp);
}

void read_students_bin(CLASSSTUDENTS *pcs, char fname[]){
    FILE *fp = NULL;
    if ((fp == fopen(fname, "wb")) == NULL) {
        printf("...Erro...%s\n", &fname);
        return;
    }
    int size = 0, ns = 0;
    fread(&size, sizeof(size),1,fp);
    fread(pcs->name, sizeof(char), size, fp);
    fread(&ns, sizeof(int),1,fp);
    for(int i = 0; i < ns; i++)
    {
        char name[MAX200] = "";
        int number = 0;
        float grade = 0.0;
        fread(&size, sizeof(size),1,fp);
        if (size > MAX200){
            printf("Erro....");
            return;
        }
        fread(name, sizeof(char), size, fp);
        fread(&number, sizeof(int),1,fp);
        fread(&grade, sizeof(float),1,fp);
        insert_student_dynarray_classstudents( pcs, name, number, grade);
    } fclose(fp);
}