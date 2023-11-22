package simplylinkedlist

import (
	"errors"
	"fmt"
)

type SimplyLinkedList[T any] struct {
	Head *Node[T]
}

func NewSimplyLinkedList[T any]() *SimplyLinkedList[T] {
	return &SimplyLinkedList[T]{
		Head: nil,
	}
}

func (list *SimplyLinkedList[T]) IsEmpty() bool {
	return list.Head == nil
}

func (list *SimplyLinkedList[T]) Push(value T) {
	node := NewNode(value)

	if list.IsEmpty() {
		list.Head = node
		return
	}

	current := list.Head

	for current.GetNext() != nil {
		current = current.GetNext()
	}

	current.SetNext(node)
}

func (list *SimplyLinkedList[T]) Pop() (T, error) {
	if list.IsEmpty() {
		var v T

		return v, errors.New("empty list")
	}

	current := list.Head

	element := current.GetValue()

	list.Head = current.GetNext()

	return element, nil
}

func (list SimplyLinkedList[T]) String() string {
	if list.Head == nil {
		return "[]"
	}

	current := list.Head
	result := "[ "

	for current != nil {
		result += fmt.Sprintf("%v ", current.Value)
		current = current.GetNext()
	}

	return result + "]"
}