package main

import (
	"fmt"
	"math"
)

func main() {
	maxSteps := 2

	var x1, x2, y1, y2 int
	var x, y float64

	for true {
		fmt.Scan(&x1)
		fmt.Scan(&y1)
		fmt.Scan(&x2)
		fmt.Scan(&y2)

		if x1 == 0 && y1 == 0 && x1 == x2 && y1 == y2 {
			break
		}

		if x1 != 0 && y1 != 0 && x1 == x2 && y1 == y2 {
			fmt.Println(0)
			continue
		}

		x = math.Abs(float64(x1 - x2))
		y = math.Abs(float64(y1 - y2))

		if x1 == x2 && y1 != y2 || x1 != x2 && y1 == y2 {
			fmt.Println(1)

		} else if x == y {
			fmt.Println(1)
		} else {
			fmt.Println(maxSteps)
		}

	}

}
