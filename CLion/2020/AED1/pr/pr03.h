#ifndef AED1_PR03_H
#define AED1_PR03_H

int main_pr03(int argc, char *argv[]);
int  quickFindUF(int N);
int initQF(int * id, int n);
int findQF(int *id, int p);
void unionQF(int *id, int n, int p, int q);
int connectedQF(int *id, int p, int q);
#endif //AED1_PR03_H
