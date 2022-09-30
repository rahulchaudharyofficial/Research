#ifndef _STACK_H_
#define _STACK_H_
    #include "utils.h"

    typedef struct StackHead stack_t;
    typedef struct StackNode node_t;

    const int DEFAULT_MAX_STACK_SIZE = 100;
    const int DEFAULT_INIT_STACK_SIZE = 0;

    stack_t* create_stack();
    stack_t* create_sized_stack(int maxSize);
    void append(void*,stack_t*);
    bool is_empty(stack_t*);
    void print_stack(stack_t*);


#endif