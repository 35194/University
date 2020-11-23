#ifndef AED1_PR07_H
#define AED1_PR07_H

#endif //AED1_PR07_H
#include <stdlib.h>

typedef struct stack_int_array{
    int * s; //array
    int capacity;
    int N;
}STACK_INT_ARRAY;

typedef struct queue_int_array{
    int *q; //Queue
    int * head; //First element
    int Tail; //Last element
    int capacity; //Total capacity
    int N; //Number of elements
}QUEUE_INT_ARRAY;

int main_pr07(int argc, char * argv[]);
void init_StackIntArray(STACK_INT_ARRAY * sp, int capacity);
int isEmpty_StackIntArray(STACK_INT_ARRAY * sp);
void push_StackIntArray(STACK_INT_ARRAY * sp, int val);
int pop_StackIntArray(STACK_INT_ARRAY * sp);
int resize_StackIntArray(STACK_INT_ARRAY * sp, int capacity);
int enqueue_QueueIntArray(QUEUE_INT_ARRAY * qu, int capacity, int item);
int queue_resize(QUEUE_INT_ARRAY * qu, int capacity);