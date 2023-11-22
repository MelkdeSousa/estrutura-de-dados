package examples

import (
	"fmt"

	dlclist "github.com/melkdesousa/estrutura-de-dados/structures/dlc_list"
)

func SuperShoppingList()  {
	list := dlclist.NewDlcList[string]()

	list.Push("milk")
	list.Push("bread")
	list.Push("eggs")
	list.Push("butter")

	fmt.Println(list)

	list = list.Reverse()

	fmt.Println(list)
}