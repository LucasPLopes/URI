package main

import "fmt"

func main() {
	var entrada float64
	positivos := 0

	for i := 0; i < 6; i++ {
		fmt.Scan(&entrada)
		if entrada > 0 {
			positivos++
		}
	}

	fmt.Printf("%d valores positivos\n", positivos)
}
