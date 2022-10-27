#include <stdio.h>
#include "queue.h"
#define N 3

int isEmpty(queue_t *queue) {
    return queue->front == NULL;
}

void enqueue(queue_t *queue, void *element) {
  if (queue == NULL) return;
	node_t *cur = (node_t *)malloc(sizeof(node_t));
    cur->data = element;
    cur->next = NULL;
    if (!isEmpty(queue)) {
		((node_t*)queue->rear)->next = cur;
		queue->rear = cur;
    }
    else {
		queue->front = queue->rear = cur;
    }
}

void * dequeue(queue_t *queue) {
  if (queue == NULL) return NULL;
	void *node;
    if (isEmpty(queue))
    {
	    return NULL;
    }
	node = queue->front;
	queue->front = ((node_t*)queue->front)->next;
	return node;
}

void printResult(queue_t *queue) {
  if (queue == NULL)
  {
    return;
  }
  
    node_t *head = queue->front;
    while (head != NULL)
    {
		printf("%s->", ((process_t*)head->data)->name);
        head = head->next;
    }
    printf("NULL\n");
}



