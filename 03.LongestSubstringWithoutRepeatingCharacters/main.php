<?php

class Solution {

    /**
     * @param String $s
     * @return Integer
     */
    function lengthOfLongestSubstring($s) {
        $length = strlen($s);
        $maxLength = 0;

        for ($i = 0; $i < $length; $i++) {
            $arr = [];
            for ($j = $i; $j < $length; $j++) {
                if (in_array($s[$j], $arr)) {
                    break;
                } else {
                    $arr[] = $s[$j];
                }
            }
            
            if (count($arr) > $maxLength) {
                $maxLength = count($arr);
            }
        }
        
        return $maxLength;
    }
}


$solution = new Solution();

echo $solution->lengthOfLongestSubstring("abcabcbb");
echo $solution->lengthOfLongestSubstring("bbbbb");
echo $solution->lengthOfLongestSubstring("pwwkew");
