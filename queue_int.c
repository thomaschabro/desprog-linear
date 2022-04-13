#include <stdlib.h>

#include "queue_int.h"

struct _queue_int {
};

queue_int *queue_int_new() {
    queue_int *q = malloc(sizeof(queue_int));
    return q;
}

void queue_int_delete(queue_int **_q) {
    queue_int *q = *_q;
    free(q);
    *_q = NULL;
}

int queue_int_empty(queue_int *q) {
    return 0;
}

void queue_int_put(queue_int *q, int value) {
}

int queue_int_get(queue_int *q) {
    return 0;
}
