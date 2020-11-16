#include "tp09.h"

int main_tp09(int argc, const char * argv[]){
    struct pt p1 = {1,1}, p2 = {2,3};
    RECT r1 = { {1,1}, {2,3}};
    RECT r2 = { {0,0},{1,1} };
   // struct* pp1 = create_pt(p1);
    RECT * pr1 = create_rect(r1);

}
int compare_pts(struct pt pt1, struct pt pt2){
    return (pt1.x==pt2.x && pt1.y==pt2.y ? 1: 0);
}

struct pt sum_pts(struct pt pt1, struct pt pt2){
    pt1.x += pt2.x;
    pt1.y += pt2.y;
}

void print_pt(char label_pt[], struct pt p){
    printf("%s: (%d,%d)\n", label_pt, p.x, p.y);
}

void print_pt2(char label_pt[], struct pt *pp){
    printf("%s: (%d,%d)\n", label_pt, pp->x, (*pp).y);
}

int compare_rects(RECT r1, RECT r2){
    return ((compare_pts(r1.downpt, r2.downpt) && compare_pts(r1.uppt, r2.uppt) ) ? 1 : 0);
}

struct pt* create_pt(struct pt p){
    struct pt * pp = (struct pt*) malloc(sizeof(struct pt));
    pp -> x = p.x;                      //] *pp =
    (*pp).y = p.y;// OU pp -> y = p.y;    ]       p;
    return pp;
}

RECT* create_rect( RECT r) {
    RECT * pr = (RECT*) calloc(1, sizeof(RECT));
    pr -> downpt.x = r.downpt.x;
    pr -> downpt.y = r.downpt.y;
    (*pr).uppt.x = r.uppt.x;
    (*pr).uppt.y = r.uppt.y;
    return pr;
}

void print_rect2( char label_rect[], RECT * pr) {
    printf("%s", label_rect);
    print_pt2("Downpt", &(pr -> downpt));
    print_pt2("UpPoint", &((*pr).uppt));
}

void read_pt(struct pt* pp){
    scanf("%d %d", &(pp->x), &((*pp).y));
}

void read_rect( RECT * pr) {
    read_pt(&(pr->downpt));
    read_pt(&((*pr).uppt));
}