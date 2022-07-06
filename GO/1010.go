package main

import "fmt"

const TIMES int = 2

type Item struct {
	ID       int64
	Quantity int64
	Price    float64
}

func (i *Item) Total() float64 {
	return float64(i.Quantity) * i.Price
}

func main() {
	total := 0.0

	var id, quantity int64
	var price float64
	for i := 0; i < TIMES; i++ {
		fmt.Scan(&id)
		fmt.Scan(&quantity)
		fmt.Scan(&price)
		item := Item{id, quantity, price}

		total += item.Total()
	}

	fmt.Printf("VALOR A PAGAR: R$ %.2f\n", total)
}
