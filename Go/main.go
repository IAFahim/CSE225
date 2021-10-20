package main

import (
	"fmt"
	"strconv"
)

func main() {
	go sayHello(5)
	println("Mai main")
	fmt.Scanln();
}

func sayHello(x int){
	println("hello" +strconv.Itoa(x))
}
