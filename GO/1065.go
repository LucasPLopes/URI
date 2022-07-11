package main

import "fmt"

func main() {
	var entrada int
	pares := 0

	for i := 0; i < 5; i++ {
		fmt.Scan(&entrada)

		if entrada%2 == 0 {
			pares++
		}
	}

	fmt.Printf("%d valores pares\n", pares)
}
