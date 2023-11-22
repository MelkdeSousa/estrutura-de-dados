#include "node.h"

typedef struct
{
    Node *head;
} DlcList;

DlcList *createDlcList();
void push(DlcList *list, int data);
DlcList *reverse(DlcList list);
void printList(DlcList list);
int isEmpty(DlcList list);
