package main

import (
	"fmt"
	"math"
)

const PI float64 = 3.14159

func Volume(raio int64) float64 {
	return (4.0 / 3.0) * PI * math.Pow(float64(raio), 3)
}
func main() {
	var raio int64
	fmt.Scan(&raio)

	fmt.Printf("VOLUME = %.3f\n", Volume(raio))
}
