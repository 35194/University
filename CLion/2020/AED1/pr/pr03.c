#include "pr03.h"
#include "quickFind.h"
#include "../libs_src/lib_util.h"


int main_pr03(int argc, char *argv[]) {
    int N = 10;
    int * id = newIntArray(N);
    initQF(id, N);
    int n_unions = 14;
    int op[]={6, 5, 5, 0, 2, 7, 2, 1, 9, 4, 4, 3, 3, 8};
    for ( int i = 0; i < n_unions; i+= 2) {
        unionQF(id, N, op[i], op[i + 1]);
    }
}
