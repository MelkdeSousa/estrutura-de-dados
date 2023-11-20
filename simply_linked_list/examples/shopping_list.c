#include <stdio.h>
#include "../simply_linked_list.h"

int main(int argc, char const *argv[])
{
    SimplyLinkedList *list = createSimplyLinkedList();

    push(list, 1);
    push(list, 2);
    push(list, 3);

    printSimplyLinkedList(*list);

    return 0;
}
