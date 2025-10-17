<?php

class Solution {

    /**
     * @param Integer[] $nums1
     * @param Integer[] $nums2
     * @return Float
     */
    function findMedianSortedArrays($nums1, $nums2) {
        $totalLength = count($nums1) + count($nums2);
        $mergedArray = array_merge($nums1, $nums2);
        sort($mergedArray);
        $numberOfElements = count($mergedArray);
        
        if ($numberOfElements % 2 == 0) {
            $median = ($mergedArray[$numberOfElements / 2 - 1] + $mergedArray[$numberOfElements / 2]) / 2.0;
        } else {
            $median = $mergedArray[$numberOfElements / 2];
        }
        
        return $median;
    }
}

$s = new Solution();

// Test Case 1: Odd total length
$nums1_1 = [1, 3];
$nums2_1 = [2];
echo "Test 1: Median = " . $s->findMedianSortedArrays($nums1_1, $nums2_1) . PHP_EOL;

// Test Case 2: Even total length
$nums1_2 = [1, 2];
$nums2_2 = [3, 4];
echo "Test 2: Median = " . $s->findMedianSortedArrays($nums1_2, $nums2_2) . PHP_EOL;

// Test Case 3: One array empty
$nums1_3 = [];
$nums2_3 = [1];
echo "Test 3: Median = " . $s->findMedianSortedArrays($nums1_3, $nums2_3) . PHP_EOL;

// Test Case 4: Arrays with duplicate values
$nums1_4 = [1, 2, 2];
$nums2_4 = [2, 3, 4];
echo "Test 4: Median = " . $s->findMedianSortedArrays($nums1_4, $nums2_4) . PHP_EOL;

// Test Case 5: Arrays with negative numbers
$nums1_5 = [-5, -3, -1];
$nums2_5 = [2, 4, 6];
echo "Test 5: Median = " . $s->findMedianSortedArrays($nums1_5, $nums2_5) . PHP_EOL;
