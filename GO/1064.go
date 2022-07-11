package main

import "fmt"

func main() {
	var entrada, soma float64
	positivos := 0

	soma = 0.0
	for i := 0; i < 6; i++ {
		fmt.Scan(&entrada)
		if entrada > 0 {
			positivos++
			soma += entrada
		}
	}

	fmt.Printf("%d valores positivos\n", positivos)
	fmt.Printf("%.1f\n", soma/float64(positivos))
}
