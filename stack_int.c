#include <stdlib.h>

#include "stack_int.h"

struct _stack_int {
};

stack_int *stack_int_new() {
    stack_int *s = malloc(sizeof(stack_int));
    return s;
}

void stack_int_delete(stack_int **_s) {
    stack_int *s = *_s;
    free(s);
    *_s = NULL;
}

int stack_int_empty(stack_int *s) {
    return 0;
}

void stack_int_push(stack_int *s, int value) {
}

int stack_int_pop(stack_int *s) {
    return 0;
}
