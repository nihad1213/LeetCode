<?php

class Solution {
    
    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer[]
     */
     function twoSum($nums, $target) {
        for($i = 0; $i < count($nums); $i++) {
            for($j = $i + 1; $j < count($nums); $j++) {
                if($target == $nums[$i] + $nums[$j]) {
                    return [$i, $j];
                }
            }
        }

        return null;
     }
}

$testCases = new Solution();
$testCase1 = $testCases->twoSum([2, 7, 11, 15], 9); 
$testCase2 = $testCases->twoSum([3, 2, 4], 6);
$testCase3 = $testCases->twoSum([3, 3], 6);

print_r($testCase1);
print_r($testCase2);
print_r($testCase3);
