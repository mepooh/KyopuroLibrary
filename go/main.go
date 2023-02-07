package main

import (
	"fmt"
	"strconv"
	"strings"
)

type kyoute struct {

}

func main() {
	by := []byte("hoge foo var\nboon")
	sl := strings.Fields(string(by))
	for i, row := range sl {
		fmt.Println(strconv.Itoa(i) + " " + row)
	}
}