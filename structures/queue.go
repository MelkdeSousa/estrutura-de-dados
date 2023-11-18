package structures

import "errors"

type Queue[T any] struct {
	Values []T
	Start int
	End int
	Total int
}

func NewQueue[T any]() Queue[T] {
	s := Queue[T]{
		Values: make([]T, 0),
		Start: 0,
		End: 0,
		Total: 0,
	}

	return s
}

func (s *Queue[T]) Push(valor T) {
	s.Values = append(s.Values, valor)
	s.End = (s.End + 1) % len(s.Values)
	s.Total++
}

func (s *Queue[T]) Pop() (T, error) {
	if s.IsEmpty() {
		var v T

		return v, errors.New("empty queue")
	}

	topo := s.Values[s.Start]
	s.Start = (s.Start + 1) % len(s.Values)
	s.End = (s.End - 1) % len(s.Values)
	s.Total--

	return topo, nil
}


func (s *Queue[T]) IsEmpty() bool {
	return s.Total == 0
}

