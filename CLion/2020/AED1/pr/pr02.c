#include "pr02.h"


int main_pr02(int argc, char *argv[]) {
    int N = 100;
    int * V = newIntArray(N);
    uniformDistinctArray(V, N, -N, N);
    sortIntArray(V,N);
    int index = worksheet1Ex5(V, N, 5);
    printf("Celing =%d\n floor = %d");

}

int worksheet1Ex4(int * a, int n) {
    int lo = 0, hi = n - 1, mid;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (a[mid-1]>0) hi = mid - 1;
        else if (a[mid]<=0) lo = mid + 1;
        else return mid;
    }
    return -1;
}

int worksheet1Ex7(int * v1, int *v2, int *v3, int n) {
    for ( int i = 0, j = 0, Z = 0; i < n*2; i++){
        if(j == n) {
            v3[i] = v2[Z++];
        }
        else if ( Z == n) {
            v3[i] = v1[j++];
        }
        v3[i] = (v1[j] < v2[Z]) ? v1[j++] : v2[Z++];
        }
    }

int worksheet1Ex5(int *a, int n, int key) { //INCOMPLETO
    int lo = 0, hi = n - 1, mid;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (a[mid-1]< key) hi = mid - 1;
        else if (a[mid]>=key) lo = mid + 1;
        else return mid;
    }
    return -1;
}