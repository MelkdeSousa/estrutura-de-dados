#include "dlc_list.h"
#include <stdio.h>
#include <stdlib.h>

DlcList *createDlcList()
{
    DlcList *list = (DlcList *)malloc(sizeof(DlcList));

    list->head = NULL;

    return list;
}

int isEmpty(DlcList list)
{
    return list.head == NULL;
}

void push(DlcList *list, int data)
{
    Node *node = newNode(data);

    if (isEmpty(*list))
    {
        setFront(node, node);
        setBack(node, node);
        list->head = node;

        return;
    }

    Node *current = list->head;

    while (getFront(current) != list->head)
    {
        current = getFront(current);
    }

    setFront(current, node);
    setBack(node, current);
    setFront(node, list->head);
    setBack(list->head, node);
}

DlcList *reverse(DlcList list)
{
    if (isEmpty(list))
    {
        return createDlcList();
    }

    DlcList *reversed = createDlcList();

    Node *current = getBack(list.head);

    while (current != list.head)
    {
        push(reversed, current->data);
        current = getBack(current);
    }

    push(reversed, current->data);

    return reversed;
}

void printList(DlcList list)
{
    Node *current = list.head;

    do
    {
        printf("%d ", current->data);
        current = getFront(current);
    } while (current != list.head);

    printf("\n");
}
