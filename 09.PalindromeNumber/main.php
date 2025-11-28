<?php

class Solution {

    /**
     * @param Integer $x
     * @return Boolean
     */
    function isPalindrome($x) {
        $string = (string)$x;
        return $string === strrev($string);
    }
}


$solution = new Solution();
$test1 = $solution->isPalindrome(121);
$test2 = $solution->isPalindrome(-121);
$test3 = $solution->isPalindrome(10);
var_dump($test1);
var_dump($test2);
var_dump($test3);
