typedef struct
{
    int data;
    Node *next;
} Node;

Node *createNode(int data);
Node *getNextNode(Node *node);
void setNextNode(Node *node, Node *next);
