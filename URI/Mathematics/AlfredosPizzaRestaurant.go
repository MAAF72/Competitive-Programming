package main

import (
	"fmt"
	"math"
)


func Pythagoras(A, B float64) float64 {
	return math.Sqrt(A*A + B*B)
}

func main() {
	var R, W, L float64
	fmt.Scan(&R)
	
	i := 1
	for R != 0 {
		fmt.Scanln(&W, &L)
		
		fmt.Print("Pizza ", i)
		if 2*R >= Pythagoras(W, L) {
			fmt.Print(" fits ")
		} else {
			fmt.Print(" does not fit ")
		}
		
		fmt.Println("on the table.")
		fmt.Scan(&R)
		i++
	}
	
}

