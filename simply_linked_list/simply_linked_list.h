#include "node.h"

// Structure representing a simply linked list
typedef struct
{
    Node *head; // Pointer to the head of the linked list
} SimplyLinkedList;

// Function to create a new simply linked list
SimplyLinkedList *createSimplyLinkedList();
/*
 * Creates a new simply linked list.
 * Returns a pointer to the created list.
 */

// Function to push an element to the simply linked list
void push(SimplyLinkedList *list, int data);
/*
 * Pushes an element to the simply linked list.
 *
 * list: Pointer to the list.
 * data: The data to be pushed to the list.
 */

// Function to pop an element from the simply linked list
int pop(SimplyLinkedList *list);
/*
 * Pops an element from the simply linked list.
 *
 * list: Pointer to the list.
 * Returns the popped element.
 */

// Function to check if the simply linked list is empty
int isEmpty(SimplyLinkedList list);
/*
 * Checks if the simply linked list is empty.
 *
 * list: The list to be checked.
 * Returns 1 if the list is empty, 0 otherwise.
 */

// Function to print the simply linked list
void printSimplyLinkedList(SimplyLinkedList list);
/*
 * Prints the elements of the simply linked list.
 *
 * list: The list to be printed.
 */