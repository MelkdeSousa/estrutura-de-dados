#include <stdio.h>
#include "../dlc_list.h"

int main(int argc, char const *argv[])
{
    DlcList *list = createDlcList();

    push(list, 1);
    push(list, 2);
    push(list, 3);
    push(list, 4);

    printList(*list);

    list = reverse(*list);

    printList(*list);

    return 0;
}
