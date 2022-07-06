package main

import "fmt"

func Prod(a, b int64) int64 {
	return a * b
}
func main() {
	var a, b int64

	fmt.Scan(&a)
	fmt.Scan(&b)

	fmt.Printf("PROD = %d\n", Prod(a, b))
}
