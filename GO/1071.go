package main

import (
	"fmt"
)

func main() {
	var x, y, soma int64
	fmt.Scan(&x)
	fmt.Scan(&y)

	if x > y {
		temp := x
		x = y
		y = temp
	}
	x++
	for i := x; i < y; i++ {
		if uint64(i)%2 == 1 {
			soma += i
		}
	}

	fmt.Println(soma)
}
