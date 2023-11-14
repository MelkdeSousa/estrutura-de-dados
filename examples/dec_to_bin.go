package examples

import (
	"fmt"

	"github.com/melkdesousa/estrutura-de-dados/structures"
)

func DecToBin(dec int) {
	p := structures.NewStack[int]()

	number := 172

	for number > 0 {
		resto := number % 2
		p.Push(resto)
		number = number / 2
	}

	for !p.IsEmpty() {
		resto, _ := p.Pop()
		fmt.Print(resto)
	}
}