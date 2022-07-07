package main

import (
	"fmt"
	"math"
)

const PI float64 = 3.14159

type Data struct {
	A float64
	B float64
	C float64
}

func (d *Data) RectangledTriangle() float64 {
	return (d.A * d.C) / 2.0
}

func (d *Data) Circle() float64 {
	return PI * math.Pow(d.C, 2.0)
}

func (d *Data) Trapezium() float64 {
	return ((d.A + d.B) * d.C) / 2.0
}

func (d *Data) Square() float64 {
	return math.Pow(d.B, 2)
}

func (d *Data) Rectangled() float64 {
	return d.A * d.B
}

func main() {
	var a, b, c float64
	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)

	data := Data{a, b, c}

	fmt.Printf("TRIANGULO: %.3f\n", data.RectangledTriangle())
	fmt.Printf("CIRCULO: %.3f\n", data.Circle())
	fmt.Printf("TRAPEZIO: %.3f\n", data.Trapezium())
	fmt.Printf("QUADRADO: %.3f\n", data.Square())
	fmt.Printf("RETANGULO: %.3f\n", data.Rectangled())
}
