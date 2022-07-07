package main

import (
	"fmt"
	"math"
)

type Data struct {
	A int64
	B int64
	C int64
}

func MaiorAB(a, b int64) int64 {
	return (a + b + int64(math.Abs(float64(a)-float64(b)))) / 2
}

func Saida(value int64) string {
	return fmt.Sprintf("%d eh o maior\n", value)
}

func main() {
	var a, b, c int64
	var ehMaior int64

	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)

	data := Data{a, b, c}
	ehMaior = MaiorAB(data.A, data.B)
	ehMaior = MaiorAB(ehMaior, data.C)

	fmt.Printf(Saida(ehMaior))
}
