#include "node.h"

// Structure representing a simply linked list
typedef struct
{
    Node *head; // Pointer to the head of the linked list
} SimplyLinkedList;

// Function to create a new simply linked list
/*
 * Creates a new simply linked list.
 * Returns a pointer to the created list.
 */
SimplyLinkedList *createSimplyLinkedList();

// Function to push an element to the simply linked list
/*
 * Pushes an element to the simply linked list.
 *
 * list: Pointer to the list.
 * data: The data to be pushed to the list.
 */
void push(SimplyLinkedList *list, int data);

// Function to pop an element from the simply linked list
/*
 * Pops an element from the simply linked list.
 *
 * list: Pointer to the list.
 * Returns the popped element.
 */
int pop(SimplyLinkedList *list);

// Function to check if the simply linked list is empty
/*
 * Checks if the simply linked list is empty.
 *
 * list: The list to be checked.
 * Returns 1 if the list is empty, 0 otherwise.
 */
int isEmpty(SimplyLinkedList list);

// Function to print the simply linked list
/*
 * Prints the elements of the simply linked list.
 *
 * list: The list to be printed.
 */
void printSimplyLinkedList(SimplyLinkedList list);

/*
 * Sorts the elements of the simply linked list using bubble sort.
 *
 * list: The list to be sorted.
 */
void bubbleSort(SimplyLinkedList *list);