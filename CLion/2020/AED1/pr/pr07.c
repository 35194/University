//
// Created by plane on 23/11/2020.
//

#include "pr07.h"

int main_pr07(int argc, char * argv[]){
    STACK_INT_ARRAY sp;
    int capacity = 2;
    init_StackIntArray(&sp, capacity);
}

void init_StackIntArray(STACK_INT_ARRAY * sp, int capacity){
    sp->s = (int*) malloc(sizeof(int) * capacity);
    sp-> capacity = capacity;
    sp-> N = 0;
}

void push_StackIntArray(STACK_INT_ARRAY * sp, int val){
    if(sp->N == sp->capacity){
        resize_StackIntArray(&sp, sp->capacity*2);
        sp->s[sp->N]= val;
        sp->N++;
    }
}

int resize_StackIntArray(STACK_INT_ARRAY * sp, int capacity){
    int * copy = (int * ) malloc(sizeof(int)* capacity);
    for(int i = 0; i < sp->capacity;i++){
        copy[i] = sp->s[i];
        sp->s = copy;
        sp->capacity = capacity;
    }
}

int enqueue_QueueIntArray(QUEUE_INT_ARRAY * qu, int capacity, int item){
    if(qu -> N == qu -> capacity){
        resize_StackIntArray(qu, qu->capacity * 2);}
    if(qu->Tail == qu->capacity){
        qu->Tail = 0;
    }
    qu->a[qu->Tail]=item;
    (qu->N)++;
    (qu->Tail)++;
}

int queue_resize(QUEUE_INT_ARRAY * qu, int capacity){
    int * copy = (int *) malloc (sizeof(int) * capacity);
    for (int i = 0; i < qu -> N; i++){
        copy[i]= qu->q[(*qu->head+i) % capacity];
    }
    qu->q = copy;
    qu->capacity=capacity;
}