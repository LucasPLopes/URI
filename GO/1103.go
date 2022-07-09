package main

import (
	"fmt"
	"time"
)

func main() {

	var h1, m1, h2, m2 int

	for true {
		fmt.Scan(&h1)
		fmt.Scan(&m1)
		fmt.Scan(&h2)
		fmt.Scan(&m2)

		if h1 == 0 && m1 == 0 && h2 == h1 && m1 == m2 {
			break
		}

		curretDay := 7
		nextDay := 7
		day1 := time.Date(1995, 12, curretDay, h1, m1, 0, 0, time.UTC)

		if h1 > h2 || h1 == h2 && m1 > m2 {
			nextDay++
		}

		day2 := time.Date(1995, 12, nextDay, h2, m2, 0, 0, time.UTC)

		difference := day2.Sub(day1)
		fmt.Println(difference.Minutes())
	}

}
