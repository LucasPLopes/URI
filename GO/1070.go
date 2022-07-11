package main

import "fmt"

func main() {
	var in int
	fmt.Scan(&in)

	if in%2 == 0 {
		in++
	}

	fmt.Println(in)
	for i := 0; i < 5; i++ {
		in += 2
		fmt.Println(in)
	}
}
