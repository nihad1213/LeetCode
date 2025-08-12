using System;

public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        for (int i = 0; i < nums.Length; i++) {
            for (int j = i + 1; j < nums.Length; j++) {
                if (nums[i] + nums[j] == target) {
                    return new int[] { i, j };
                }
            }
        }
        return new int[0];
    }

    public static void Main() {
        Solution solution = new Solution();

        int[] test1 = {2, 7, 11, 15};
        Console.WriteLine($"[{string.Join(", ", solution.TwoSum(test1, 9))}]");

        int[] test2 = {3, 2, 4};
        Console.WriteLine($"[{string.Join(", ", solution.TwoSum(test2, 6))}]");

        int[] test3 = {3, 3};
        Console.WriteLine($"[{string.Join(", ", solution.TwoSum(test3, 6))}]");
    }
}
