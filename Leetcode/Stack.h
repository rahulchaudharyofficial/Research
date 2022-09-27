#ifndef _STACK_H_
#define _STACK_H_
    #include "utils.h"

    typedef struct StackHead head_t;
    typedef struct StackNode node_t;

    const int defaultMaxStackSize = 100;

    head_t* create_stack();
    head_t* create_sized_stack(int maxSize);
#endif