package main

import "fmt"

func Media2(a, b, c float64) float64 {
	return (a*2.0 + b*3.0 + c*5.0) / 10.0
}
func main() {
	var a, b, c float64

	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)

	fmt.Printf("MEDIA = %.5f\n", Media2(a, b, c))
}
