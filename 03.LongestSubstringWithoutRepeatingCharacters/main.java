import java.util.*;

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int length = s.length();
        int maxLength = 0;

        for (int i = 0; i < length; i++) {
            List<Character> myArr = new ArrayList<>();
            for (int j = i; j < length; j++) {
                if (myArr.contains(s.charAt(j))) {
                    break;
                } else {
                    myArr.add(s.charAt(j));
                }
            }
            if (myArr.size() > maxLength) {
                maxLength = myArr.size();
            }
        }
        return maxLength;
    }
}

public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println(solution.lengthOfLongestSubstring("abcabcbb"));
        System.out.println(solution.lengthOfLongestSubstring("bbbbb"));
        System.out.println(solution.lengthOfLongestSubstring("pwwkew"));
    }
}
