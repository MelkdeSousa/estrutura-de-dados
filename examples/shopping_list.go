package examples

import (
	"fmt"

	simplylinkedlist "github.com/melkdesousa/estrutura-de-dados/structures/simply_linked_list"
)

func ShoppingList()  {
	list := simplylinkedlist.NewSimplyLinkedList[string]()

	list.Push("milk")
	list.Push("bread")
	list.Push("eggs")
	list.Push("butter")

	fmt.Println(list)
}