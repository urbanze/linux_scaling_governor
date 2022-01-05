package main

import (
  "fmt"
)

func isPrime(x int) int {
  if x < 2 {
    return 0
  }

  for i := 2; i < x; i++ {
    if x%i == 0 {
      return 0
    }
  }

  return 1

}

func main() {
  counter := 0

  for i := 1; i < 20000; i++ {
    if isPrime(i) == 1 {
      counter++
    }
  }

  fmt.Printf("Total: %d\n", counter)
}
