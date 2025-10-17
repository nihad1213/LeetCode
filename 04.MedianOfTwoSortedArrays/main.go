package main

import (
	"fmt"
	"sort"
)

func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
	mergedArray := append(nums1, nums2...)
	sort.Ints(mergedArray)
	total := len(mergedArray)
	if total%2 == 0 {
		return float64(mergedArray[total/2-1]+mergedArray[total/2]) / 2.0
	} else {
		return float64(mergedArray[total/2])
	}
}

func main() {
	fmt.Println("Test 1: Median =", findMedianSortedArrays([]int{1, 3}, []int{2}))
	fmt.Println("Test 2: Median =", findMedianSortedArrays([]int{1, 2}, []int{3, 4}))
	fmt.Println("Test 3: Median =", findMedianSortedArrays([]int{}, []int{1}))
	fmt.Println("Test 4: Median =", findMedianSortedArrays([]int{1, 2, 2}, []int{2, 3, 4}))
	fmt.Println("Test 5: Median =", findMedianSortedArrays([]int{-5, -3, -1}, []int{2, 4, 6}))
}




