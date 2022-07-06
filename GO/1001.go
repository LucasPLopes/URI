package main

import "fmt"

func main() {
	var a, b int

	fmt.Scan(&a)
	fmt.Scan(&b)
	soma := a + b
	fmt.Printf("X = %d\n", soma)
}
