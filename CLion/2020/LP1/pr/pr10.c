#include "pr10.h"

int main_pr10(int argc, const char * argv[]){
    RECT_QUEUE  *rq;
    POINT p1 = {1, 2};
    POINT p2 = {4, 6};
    POINT p3 = {8, 10};
    POINT p4 = {12, 14};
    rq = create_rect_queue();
    enqueue_rectangle(rq,p1,p2);
    enqueue_rectangle(rq,p3,p4);
    //print_rect_queue(rq);
    get_rect_queue_node_area(rq);
}

RECT_QUEUE * create_rect_queue(){
    RECT_QUEUE *rq=(RECT_QUEUE*)malloc(sizeof(RECT_QUEUE));
    rq->phead = rq->ptail = NULL;
    return rq;
}
RECT_QUEUE_NODE * create_rect_queue_node (POINT downpt, POINT uppt){
    RECT_QUEUE_NODE * rqn = (RECT_QUEUE_NODE*) malloc(sizeof(RECT_QUEUE_NODE));
    rqn->r.uppt.x = uppt.x;
    rqn->r.uppt.y = uppt.y;
    rqn->r.downpt.x = downpt.x;
    rqn->r.downpt.y = downpt.y;
    return rqn;
}
void enqueue_rectangle (RECT_QUEUE * rect_queue, POINT downpt, POINT uppt){
    RECT_QUEUE_NODE * rqn = create_rect_queue_node(downpt, uppt);
    if (rect_queue->phead == NULL) { //rq vazia
        rect_queue->phead = rect_queue->ptail = rqn;
        return;
    }
    rect_queue->ptail->pnext=rqn;
    rect_queue->ptail = rqn;
}
RECT_QUEUE_NODE * dequeue_rectangle (RECT_QUEUE * rect_queue){
    if(rect_queue->phead==NULL) return NULL;
    RECT_QUEUE_NODE * to_return = rect_queue->phead;
    rect_queue->phead = rect_queue->phead->pnext;
    if(rect_queue->phead == NULL){
        rect_queue->ptail = NULL;
        return to_return;
    }
}
void print_rect_queue (RECT_QUEUE * rqu){
    RECT_QUEUE_NODE * paux = rqu->phead;
    while (paux != NULL){
        printf("(%d, %d, %d, %d)\n",    paux->r.downpt.x,
                                        paux->r.downpt.y,
                                        paux->r.uppt.x,
                                        paux->r.uppt.y);
        printf("|\nV\n");
        paux=paux->pnext;
    }
    printf("NULL");

}

void get_rect_queue_node_area (RECT_QUEUE * rqu){
    RECT_QUEUE_NODE * rqn;
    while ((rqn=dequeue_rectangle(rqu)) != NULL){
        printf("Area: %d\n", abs(rqn->r.uppt.x-rqn->r.downpt.x)*abs(rqn->r.uppt.y-rqn->r.downpt.y));
    }
}