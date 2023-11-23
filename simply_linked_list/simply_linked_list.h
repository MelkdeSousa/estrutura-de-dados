#include "node.h"

typedef struct
{
    Node *head;
} SimplyLinkedList;

SimplyLinkedList *createSimplyLinkedList();
void push(SimplyLinkedList *list, int data);
int pop(SimplyLinkedList *list);
int isEmpty(SimplyLinkedList list);
void printSimplyLinkedList(SimplyLinkedList list);
