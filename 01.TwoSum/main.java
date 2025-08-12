import java.util.Arrays;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                 if (target == nums[i] + nums[j]) {
                    return new int[] {i, j};
                 }
            }
        }
        return null;
    }


    public static void main(String[] args) {
        Solution solution = new Solution();

        int[] test1 = {2, 7, 11, 15};
        System.out.println(Arrays.toString(solution.twoSum(test1, 9)));

        int[] test2 = {3, 2, 4};
        System.out.println(Arrays.toString(solution.twoSum(test2, 6)));

        int[] test3 = {3, 3};
        System.out.println(Arrays.toString(solution.twoSum(test3, 6)));
    }
}
