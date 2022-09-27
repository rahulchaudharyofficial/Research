#include "Stack.h"

struct StackNode {
    void *value;
    struct StackNode *previous;
    struct StackNode *next;
};

struct StackHead {
    struct StackNode *front;
    struct StackNode *rear;
    struct StackNode *top;
    int size;
    int maxSize;
};

head_t* create_stack() {
    head_t* head = (head_t*) malloc(sizeof(head_t));
    if (head)
    {
        head->front = NULL;
        head->maxSize = 0;
        head->rear = NULL;
        head->size = 0;
        head->top = NULL;
    }
    else
    {
        printf("ERROR: ");
    }
    return head;
}

head_t* create_sized_stack(int maxSize) {
    return NULL;
}

