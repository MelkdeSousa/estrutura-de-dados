package main

import "errors"

type Stack[T any] []T

func New[T any]() Stack[T] {
	return make(Stack[T], 0)
}

func (s *Stack[T]) Push(valor T) {
	*s = append(*s, valor)
}

func (s *Stack[T]) Pop() (T, error) {
	if len(*s) == 0 {
		return T{}, errors.New("empty stack")
	}

	topo := (*s)[len(*s)-1]
	*s = (*s)[:len(*s)-1]
	return topo, nil
}

func (s *Stack[T]) IsEmpty() bool {
	return len(*s) <= 0
}
