#include <stdio.h>
#include <stdlib.h>

typedef struct process_t {
    int identifier;
    char *name;
} process_t;

typedef struct node {
    void* data;
    struct node *next;
} node_t;

typedef struct queue_t {
	void *front;
	void *rear;
}queue_t;


int isEmpty(queue_t *queue);

void printResult(queue_t *queue);

void enqueue(queue_t *queue, void *element);

void* dequeue(queue_t *queue);