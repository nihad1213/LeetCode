package main

import (
    "fmt"
    "strconv"
)

func isPalindrome(x int) bool {
    s := strconv.Itoa(x)
    reversed := ""
    
    for i := len(s) - 1; i >= 0; i-- {
        reversed += string(s[i])
    }
    
    return s == reversed
}

func main() {
    fmt.Println(isPalindrome(121))
    fmt.Println(isPalindrome(-121))
    fmt.Println(isPalindrome(10))
}
