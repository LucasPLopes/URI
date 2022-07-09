package main

import (
	"fmt"
	"sort"
)

func main() {
	var times, input int
	fmt.Scan(&times)

	m := make(map[int]int)

	// start  map  and filling and increment
	for i := 0; i < int(times); i++ {
		fmt.Scan(&input)
		if _, v := m[input]; v {
			inc := m[input]
			inc++
			m[input] = inc
		} else {
			m[input] = 1
		}
	}

	// starting sorting
	keys := make([]int, 0, len(m))

	for k := range m {
		keys = append(keys, k)
	}

	sort.Ints(keys)

	for _, k := range keys {
		fmt.Printf("%d aparece %d vez(es)\n", k, m[k])
	}
}
