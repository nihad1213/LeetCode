import java.util.Arrays;

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] mergedArray = new int[nums1.length + nums2.length];
        System.arraycopy(nums1, 0, mergedArray, 0, nums1.length);
        System.arraycopy(nums2, 0, mergedArray, nums1.length, nums2.length);

        Arrays.sort(mergedArray);

        int n = mergedArray.length;
        if (n % 2 == 0) {
            return (mergedArray[n / 2 - 1] + mergedArray[n / 2]) / 2.0;
        } else {
            return mergedArray[n / 2];
        }
    }
}

class Main {
    public static void main(String[] args) {
        Solution s = new Solution();

        // Test Case 1: Odd total length
        int[] nums1_1 = {1, 3};
        int[] nums2_1 = {2};
        System.out.println("Test 1: Median = " + s.findMedianSortedArrays(nums1_1, nums2_1));

        // Test Case 2: Even total length
        int[] nums1_2 = {1, 2};
        int[] nums2_2 = {3, 4};
        System.out.println("Test 2: Median = " + s.findMedianSortedArrays(nums1_2, nums2_2));

        // Test Case 3: One array empty
        int[] nums1_3 = {};
        int[] nums2_3 = {1};
        System.out.println("Test 3: Median = " + s.findMedianSortedArrays(nums1_3, nums2_3));

        // Test Case 4: Arrays with duplicate values
        int[] nums1_4 = {1, 2, 2};
        int[] nums2_4 = {2, 3, 4};
        System.out.println("Test 4: Median = " + s.findMedianSortedArrays(nums1_4, nums2_4));

        // Test Case 5: Arrays with negative numbers
        int[] nums1_5 = {-5, -3, -1};
        int[] nums2_5 = {2, 4, 6};
        System.out.println("Test 5: Median = " + s.findMedianSortedArrays(nums1_5, nums2_5));
    }
}
