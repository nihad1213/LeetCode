<?php

class Solution {

    /**
     * @param Integer $x
     * @return Integer
     */
    function reverse($x) {
		$negative = $x < 0;
		$x = abs($x);
		$array = str_split((string) $x);
		$reverseArray = array_reverse($array);

		while($reverseArray[0] === '0') {
			array_shift($reverseArray);
		}

		$reversedNumber = (int) implode("", $reverseArray);

		if ($negative) {
			$reversedNumber *= -1;
		}

		if ($reversedNumber < -2147483648 || $reversedNumber > 2147483647) {
            return 0;
        }

		return $reversedNumber;
    }
}

$solution = new Solution;
$test1 = $solution->reverse(123);
$test2 = $solution->reverse(-123);
$test3 = $solution->reverse(120);

var_dump($test1);
var_dump($test2);
var_dump($test3);
