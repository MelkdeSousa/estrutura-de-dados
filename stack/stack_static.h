#define MAX_ITEMS 100

typedef struct
{
    int data[MAX_ITEMS];
    int top;
} StackStatic;

void create(StackStatic *stack);
void push(StackStatic *stack, int element);
int pop(StackStatic *stack);

int isEmpty(StackStatic stack);
int isFull(StackStatic stack);
