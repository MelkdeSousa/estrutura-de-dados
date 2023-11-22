package dlclist

type Node[T any] struct {
	Value T
	Front *Node[T]
	Back  *Node[T]
}

func NewNode[T any](value T) *Node[T] {
	return &Node[T]{
		Value: value,
		Front: nil,
		Back:  nil,
	}
}

func (node *Node[T]) GetValue() T {
	return node.Value
}

func (node *Node[T]) SetValue(value T) {
	node.Value = value
}

func (node *Node[T]) GetFront() *Node[T] {
	return node.Front
}

func (node *Node[T]) SetFront(front *Node[T]) {
	node.Front = front
}

func (node *Node[T]) GetBack() *Node[T] {
	return node.Back
}

func (node *Node[T]) SetBack(back *Node[T]) {
	node.Back = back
}
