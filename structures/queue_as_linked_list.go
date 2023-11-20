package structures

import (
	"errors"

	simplylinkedlist "github.com/melkdesousa/estrutura-de-dados/structures/simply_linked_list"
)

type QueueAsLinkedList[T any] struct {
	Head *simplylinkedlist.Node[T]
}

func NewQueueAsLinkedList[T any]() QueueAsLinkedList[T] {
	s := QueueAsLinkedList[T]{
		Head: nil,
	}

	return s
}

func (s *QueueAsLinkedList[T]) Push(valor T) {
	node := simplylinkedlist.NewNode[T](valor)

	node.SetNext(s.Head)

	s.Head = node
}

func (s *QueueAsLinkedList[T]) Pop() (T, error) {
	if s.IsEmpty() {
		var v T

		return v, errors.New("empty queue")
	}

	top := s.Head

	s.Head = top.GetNext()

	return top.Value, nil
}


func (s *QueueAsLinkedList[T]) IsEmpty() bool {
	return s.Head == nil
}

