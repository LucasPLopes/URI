package main

import "fmt"

func Salary(hours int64, perHour float64) float64 {
	return float64(hours) * perHour
}
func main() {
	var number, hours int64
	var perHour float64

	fmt.Scan(&number)
	fmt.Scan(&hours)
	fmt.Scan(&perHour)

	fmt.Printf("NUMBER = %d\n", number)
	fmt.Printf("SALARY = U$ %.2f\n", Salary(hours, perHour))
}
