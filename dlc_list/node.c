#include "node.h"
#include <stdio.h>
#include <stdlib.h>

Node *newNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->front = NULL;
    node->back = NULL;
    return node;
}

Node *getFront(Node *node)
{
    return node->front;
}

Node *getBack(Node *node)
{
    return node->back;
}

void setFront(Node *node, Node *front)
{
    node->front = front;
}

void setBack(Node *node, Node *back)
{
    node->back = back;
}
