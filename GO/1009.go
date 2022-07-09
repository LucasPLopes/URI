package main

import "fmt"

func Salary(base, bonus float64) float64 {
	return base + bonus*0.15
}
func main() {
	var name string
	var base, bonus float64

	fmt.Scan(&name)
	fmt.Scan(&base)
	fmt.Scan(&bonus)

	fmt.Printf("TOTAL = R$ %.2f\n", Salary(base, bonus))
}
