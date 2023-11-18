#define MAX_SIZE 10

typedef struct {
    int data[MAX_SIZE];

    int front;
    int rear;
    int total;
} QueueStatic;

void create(QueueStatic *queue);
void enqueue(QueueStatic *queue, int value);
int dequeue(QueueStatic *queue);
int peek(QueueStatic *queue);
int isEmpty(QueueStatic *queue);
int isFull(QueueStatic *queue);
