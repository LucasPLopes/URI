package main

import "fmt"

const Pi = 3.14159

func area_circulo(r float64) float64 {
	return Pi * r * r
}
func main() {
	var raio float64

	fmt.Scan(&raio)

	fmt.Printf("A=%.4f\n", area_circulo(raio))
}
