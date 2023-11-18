#include "queue_static.h"

void create(QueueStatic *queue)
{
    queue->front = 0;
    queue->rear = 0;
    queue->total = 0;
}

void enqueue(QueueStatic *queue, int value)
{
    if (!isFull(queue))
    {
        queue->data[queue->rear] = value;
        queue->rear = (queue->rear + 1) % MAX_SIZE;
        queue->total++;
    }
}

int dequeue(QueueStatic *queue)
{
    if (!isEmpty(queue))
    {
        int value = queue->data[queue->front];
        queue->front = (queue->front + 1) % MAX_SIZE;
        queue->total--;
        return value;
    }
    return -1;
}

int isEmpty(QueueStatic *queue)
{
    return queue->total == 0;
}

int isFull(QueueStatic *queue)
{
    return queue->total == MAX_SIZE;
}