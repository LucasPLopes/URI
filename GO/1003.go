package main

import "fmt"

func soma(a, b int64) int64 {
	return a + b
}
func main() {
	var a, b int64

	fmt.Scan(&a)
	fmt.Scan(&b)

	fmt.Printf("SOMA = %d\n", soma(a, b))
}
