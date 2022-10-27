#include "queue.c"
int main() {
	queue_t *queue = (queue_t *)malloc(sizeof(queue_t));
	queue->front = queue->rear = NULL;

    printf("Our queue before Enqueue\n");
    printResult(queue);
    printf("\nAfter Enqueue:\n");

    for (int i = 0; i < N; i++) {
        process_t *t = (process_t *) malloc(sizeof(*t));     
		t->name = (char *)malloc(128);
        t->identifier = i;		
        //t->name = "Try Node";
        sprintf(t->name, "Node identifier %d", i);
        enqueue(queue, t);
        printf("Enqueued: %s\n", t->name);
				
        printResult(queue);
    }
    printf("======================\n");
    printf("Before Dequeue:\n");
    printResult(queue);
	printf("\nAfter Dequeue:\n");
	while (!isEmpty(queue))
	{
		node_t *node = dequeue(queue);
		printf("Dequeued: %s\n", ((process_t*)node->data)->name);

		printResult(queue);
	}

    return 0;
}