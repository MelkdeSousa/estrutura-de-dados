#include <stdio.h>
#include <stdlib.h>
#include "simply_linked_list.h"

SimplyLinkedList *createSimplyLinkedList()
{
    SimplyLinkedList *list = (SimplyLinkedList *)malloc(sizeof(SimplyLinkedList));

    list->head = NULL;

    return list;
}

void push(SimplyLinkedList *list, int data)
{
    Node *node = createNode(data);

    if (list->head == NULL)
    {
        list->head = node;

        return;
    }

    Node *current = list->head;

    while (getNextNode(current) != NULL)
    {
        current = getNextNode(current);
    }

    setNextNode(current, node);
    return;
}

int pop(SimplyLinkedList *list)
{
    if (list->head == NULL)
        return -1;

    Node *current = list->head;

    int data = current->data;

    list->head = getNextNode(current);

    free(current);

    current = NULL;

    return data;
}

int isEmpty(SimplyLinkedList list)
{
    return list.head == NULL;
}

void printSimplyLinkedList(SimplyLinkedList list)
{
    Node *current = list.head;

    while (current != NULL)
    {
        printf("%d ", current->data);
        current = getNextNode(current);
    }

    printf("\n");
}
