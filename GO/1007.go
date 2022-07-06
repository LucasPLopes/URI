package main

import "fmt"

func DIFERENCA(a, b, c, d int64) int64 {
	return a*b - c*d
}
func main() {
	var a, b, c, d int64

	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)
	fmt.Scan(&d)

	fmt.Printf("DIFERENCA = %d\n", DIFERENCA(a, b, c, d))
}
