package main

import "fmt"

func main() {
	var A, B, C, D int
	
	fmt.Scanln(&A, &B, &C, &D)
	
	if ((B > C && D > A) && (C + D - A - B > 0) && (C >= 0 && D >= 0) && (A & 1 == 0)) {
		fmt.Println("Valores aceitos")
	} else {
		fmt.Println("Valores nao aceitos")
	}

}