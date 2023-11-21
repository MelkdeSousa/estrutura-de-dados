typedef struct
{
    int data;          // The data stored in the node
    struct Node *next; // Pointer to the next node
} Node;

/**
 * Creates a new Node with the given data.
 *
 * @param data The data to be stored in the Node.
 * @return A pointer to the newly created Node.
 */
Node *createNode(int data);

/**
 * Returns the next Node in the sequence.
 *
 * @param node The current Node.
 * @return A pointer to the next Node.
 */
Node *getNextNode(Node *node);

/**
 * Sets the next Node in the sequence.
 *
 * @param node The current Node.
 * @param next The Node to be set as the next Node.
 */
void setNextNode(Node *node, Node *next);
