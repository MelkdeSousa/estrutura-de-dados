package simplylinkedlist


type Node[T any] struct {
	Value T
	Next  *Node[T]
}

func NewNode[T any](value T) *Node[T] {
	return &Node[T]{
		Value: value,
		Next:  nil,
	}
}

func (node *Node[T]) GetValue() T {
	return node.Value
}

func (node *Node[T]) SetValue(value T) {
	node.Value = value
}

func (node *Node[T]) GetNext() *Node[T] {
	return node.Next
}

func (node *Node[T]) SetNext(next *Node[T]) {
	node.Next = next
}
