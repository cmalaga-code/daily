package main

import (
	"fmt"
	"day_0/test_function_rec"
)

func main() {
	SayHello()
	fmt.Println(test_function_rec.Absolute(-122.22))
}

func SayHello() {
	fmt.Println("Hello World")
}