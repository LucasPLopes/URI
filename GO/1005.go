package main

import "fmt"

func Media(a, b float64) float64 {
	return (a*3.5 + b*7.5) / 11.0
}
func main() {
	var a, b float64

	fmt.Scan(&a)
	fmt.Scan(&b)

	fmt.Printf("MEDIA = %.5f\n", Media(a, b))
}
