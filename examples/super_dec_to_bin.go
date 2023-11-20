package examples

import (
	"fmt"

	"github.com/melkdesousa/estrutura-de-dados/structures"
)

func SuperDecToBin(dec int) {
	p := structures.NewQueueAsLinkedList[int]()

	number := dec

	for number > 0 {
		resto := number % 2
		p.Push(resto)
		number = number / 2
	}

	for !p.IsEmpty() {
		resto, _ := p.Pop()
		fmt.Printf("%d",resto)
	}

	fmt.Println()
}