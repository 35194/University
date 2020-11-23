#include "pr09.h"

int main_pr09(int argc, const char * argv[]){
    POINT P = {1,0};
    CIRCLE C = { {1,0}, 2};
    CIRCLE * C2 = NULL;
    read_dyn_array_circles(C2,0);
    printf("%d", C2-> radius);
}

void read_array_points (POINT * apts, int size){
    //for ( int i = 0; i < size; i++){
       // scanf("%d %%d", &(apts[i].x, &(*(apts+i)).x))
    //}
    for(int i=0; i<size; i++){
        scanf("%d %d", (&(apts[i]).x, &(apts[i].y)));
        (apts+i)->x, (apts+i)->y;
    }
}

void print_array_points (POINT * apts, int size){
    //for...
    //printf("(%d, %d)\n", apts[i].x, (apts+i) -> y);
    for(int i=0; i<size; i++){
        printf("%d %d", (*(apts+i)).x, apts[i].x, (apts+i)->x);
    }
}

void translation_dyn_array_points (POINT * ppts, int size, POINT delta){
    //for ( int i = 0; i < size; i++){
        //(*(apts+i))x += delta.x; // apts[i],x += delta.x;
        //(apts+i)->y += delta.y;
    //}
    POINT *p = ppts;
    for (int i = 0; i < size; i++) {
        //(*(ppts+i)).x+=delta.x; (*(apts+i)) POINT
        //(ppts+i)->x+=delta.y;  (apts+i) *POINT
        p->x = delta.x;
        p->y = delta.y;
        p++;
    }
}


CIRCLE * read_dyn_array_circles (CIRCLE * cpts, int size){
    cpts = (CIRCLE*) calloc(size, sizeof(CIRCLE));
    CIRCLE * C = cpts;
    for (int i = 0; i < size; i++){
        scanf("%d %d %d", &C->p.x, &C->p.y, &C->radius);
        C++;
    } return cpts;
}