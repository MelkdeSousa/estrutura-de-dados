#include "node.h"
#include <stdio.h>
#include <stdlib.h>

Node *createNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

Node *getNextNode(Node *node)
{
    return node->next;
}

void setNextNode(Node *node, Node *next)
{
    node->next = next;
}
