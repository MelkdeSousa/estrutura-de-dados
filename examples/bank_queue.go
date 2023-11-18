package examples

import (
	"fmt"
	"math/rand"

	"github.com/melkdesousa/estrutura-de-dados/structures"
)

func BankQueue() {
	queue := structures.NewQueue[int]()

	fmt.Println("Senhas distribuidas:")
	for i := 0; i < 10; i++ {
		password := rand.Intn(1000)
		queue.Push(password)

		message := fmt.Sprintf("Senha para o cliente %d: %d", queue.End + 1, password)

		fmt.Println(message)
	}

	fmt.Println("Senhas atendidas:")
	for !queue.IsEmpty() {
		password, _ := queue.Pop()

		message := fmt.Sprintf("Senha atendida: %d", password)

		fmt.Println(message)
	}
}
