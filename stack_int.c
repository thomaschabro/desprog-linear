#include <stdlib.h>

#include "stack_int.h"

struct _node {
    int value;
    struct _node *next;
};

typedef struct _node node;

struct _stack_int {
    node *top;
};

stack_int *stack_int_new() {
    stack_int *s = malloc(sizeof(stack_int));
    s->top = NULL;
    return s;
}

void stack_int_delete(stack_int **_s) {
    stack_int *s = *_s;
    free(s);
    *_s = NULL;
}

int stack_int_empty(stack_int *s) {
    return s->top == NULL;
}

void stack_int_push(stack_int *s, int value) {
}

int stack_int_pop(stack_int *s) {
    return 0;
}
