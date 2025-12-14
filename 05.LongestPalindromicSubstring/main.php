<?php

class Solution {

    /**
     * @param String $s
     * @return String
     */
    function longestPalindrome($s) {
	if (strlen($s) == 1) {
		return $s;
	}


    }
}

$solution = new Solution;
$test1 = $solution->longestPalindrome("babad");
$test2 = $solution->longestPalindrome("cbbd");

var_dump($test1);
var_dump($test2);
