#include <stdio.h>
#include "../simply_linked_list.h"

int main(int argc, char const *argv[])
{
    SimplyLinkedList *list = createSimplyLinkedList();

    push(list, 3);
    push(list, 2);
    push(list, 1);
    push(list, 2);
    push(list, 31);
    push(list, 9);

    printf("Original list:\n");
    printSimplyLinkedList(*list);

    printf("Sorted list:\n");
    printSimplyLinkedList(*list);

    return 0;
}
