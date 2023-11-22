package dlclist

import "fmt"

type DlcList[T any] struct {
	Head *Node[T]
}

func NewDlcList[T any]() *DlcList[T] {
	return &DlcList[T]{
		Head: nil,
	}
}

func (list DlcList[T]) IsEmpty() bool {
	return list.Head == nil
}

func (list *DlcList[T]) Push(value T) {
	node := NewNode(value)

	if list.IsEmpty() {
		node.SetBack(node)
		node.SetFront(node)

		list.Head = node

		return
	}

	current := list.Head

	for current.GetFront() != list.Head {
		current = current.GetFront()
	}

	list.Head.SetBack(node)
	
	current.SetFront(node)

	node.SetBack(current)
	node.SetFront(list.Head)
}

func (list DlcList[T]) Reverse() *DlcList[T] {
	if list.Head == nil {
		return &list
	}

	newList := NewDlcList[T]()

	current := list.Head.GetBack()

	for current != list.Head {
		newList.Push(current.GetValue())
		current = current.GetBack()
	}

	newList.Push(current.GetValue())

	return newList
}

func (list DlcList[T]) String() string {
	if list.Head == nil {
		return "[]"
	}

	current := list.Head

	result := "[ "

	for current.GetFront() != list.Head {
		result += fmt.Sprintf("%v ", current.GetValue())
		current = current.GetFront()
	}

	return result + fmt.Sprintf("%v ]", current.GetValue())
}
