#include <stdio.h>
#include <stdlib.h>
#include "simply_linked_list.h"
#include "node.h"

void createSimplyLinkedList(SimplyLinkedList *list)
{
    list->head = NULL;
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

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = node;
    return;
}

int pop(SimplyLinkedList *list)
{
    if (list->head == NULL)
        return -1;

    Node *current = list->head;

    int data = current->data;

    list->head = current->next;

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
    }

    printf("\n");
}
