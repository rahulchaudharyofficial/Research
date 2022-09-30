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

node_t* create_node(void* value, node_t* previous, node_t* next)
{
    node_t* node = (node_t*) malloc(sizeof(node_t));
    if (node)
    {
        node->value = value;
        node->previous = previous;
        node->next = next;
    }
    else
    {
        printf("%s\n", MEMORY_ALLOCATION_FAILED);
        perror(MEMORY_ALLOCATION_FAILED);
    }
    return node;
}

stack_t* create_stack() {
    stack_t* head = (stack_t*) malloc(sizeof(stack_t));
    if (head)
    {
        head->front = NULL;
        head->maxSize = DEFAULT_MAX_STACK_SIZE;
        head->rear = NULL;
        head->size = 0;
        head->top = NULL;
    }
    else
    {
        printf("%s\n",MEMORY_ALLOCATION_FAILED);
        perror(MEMORY_ALLOCATION_FAILED);
    }
    return head;
}

stack_t* create_sized_stack(const int maxSize) {
    stack_t* head = (stack_t*) malloc(sizeof(stack_t));
    if (head)
    {
        head->front = NULL;
        head->maxSize = maxSize;
        head->rear = NULL;
        head->size = DEFAULT_INIT_STACK_SIZE;
        head->top = NULL;
    }
    else
    {
        printf("%s\n",MEMORY_ALLOCATION_FAILED);
        perror(MEMORY_ALLOCATION_FAILED);
    }
    return head;
}


void append(void* data,stack_t* stack)
{
    if (stack)
    {
        if (stack->size < stack->maxSize)
        {
            node_t* node = create_node(data, NULL, NULL);
            if (!is_empty(stack))
            {
                // Add as first
                stack->front = node;
                stack->rear = node;
                stack->top = node;
                stack->size += 1;
            }
            else
            {
                // Otherwise
                stack->front = node;
                node->next = stack->top;
                stack->top = node;
                stack->size += 1;

            }
        }
        else
        {
            printf("%s\n", OVERFLOW_ERROR);
            perror(OVERFLOW_ERROR);
        }
    }
    else
    {
        printf("%s%s\n", OPERATION_ERROR,"append");
    }
}

bool is_empty(stack_t* stack)
{
    bool result = true;
    if (stack != NULL)
    {
        if (stack->size > 0)
        {
            result = false;
        }
    }
    return result;
}

void print_stack(stack_t* stack)
{
    if (stack)
    {
        int i = stack->size;
        node_t* temp = stack -> top;
        while (i > 0)
        {

            int* t = (int*)temp->value;
            printf("%d\n", *t);
            temp = temp->next;
            i--;
        }
        printf("\n");
    }
}