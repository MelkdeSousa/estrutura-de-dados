#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../queue_static.h"

int main(int argc, char const *argv[])
{
    int value;
    srand(time(NULL));

    QueueStatic queue;
    create(&queue);

    for (int i = 0; i < MAX_SIZE; i++)
    {
        value = rand() % 100;
        printf("Senha gerada para o cliente %d: %d\n", i + 1, value);
        enqueue(&queue, value);
    }

    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("Senha do cliente %d: ", i + 1);
        value = dequeue(&queue);
        printf("%d\n", value);
    }

    return 0;
}
