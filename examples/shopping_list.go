package examples

import (
	"fmt"

	simplylinkedlist "github.com/melkdesousa/estrutura-de-dados/structures/simply_linked_list"
)

func GreaterThanBetweenString(a, b string) bool {
	return a > b
}

func GreaterThanBetweenInt(a, b int) bool {
	return a > b
}

func ShoppingList()  {
	list := simplylinkedlist.NewSimplyLinkedList[int]()

	list.Push(2)
	list.Push(4)
	list.Push(1)
	list.Push(0)

	fmt.Println(list)
	list.BubbleSort(GreaterThanBetweenInt)
	fmt.Println(list)
}