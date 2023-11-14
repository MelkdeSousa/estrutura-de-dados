package structures

import "errors"

type Stack[T any] []T

// NewStack creates a new stack of type T
func NewStack[T any]() Stack[T] {
	s := make(Stack[T], 0)
	return s
}

func (s *Stack[T]) Push(valor T) {
	*s = append(*s, valor)
}

func (s *Stack[T]) Pop() (T, error) {
	if len(*s) == 0 {
		var v T

		return v, errors.New("empty stack")
	}

	topo := (*s)[len(*s)-1]
	*s = (*s)[:len(*s)-1]
	return topo, nil
}

func (s *Stack[T]) IsEmpty() bool {
	return len(*s) <= 0
}
