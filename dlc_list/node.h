typedef struct {
    int data;
    struct Node *front;
    struct Node *back;
} Node;

Node *newNode(int data);
Node *getFront(Node *node);
Node *getBack(Node *node);

void setFront(Node *node, Node *front);
void setBack(Node *node, Node *back);
