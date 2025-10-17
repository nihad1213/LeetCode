using System;
using System.Linq;

public class Solution
{
    public double FindMedianSortedArrays(int[] nums1, int[] nums2)
    {
        int[] mergedArray = new int[nums1.Length + nums2.Length];
        nums1.CopyTo(mergedArray, 0);
        nums2.CopyTo(mergedArray, nums1.Length);

        Array.Sort(mergedArray);

        int n = mergedArray.Length;
        if (n % 2 == 0)
        {
            return (mergedArray[n / 2 - 1] + mergedArray[n / 2]) / 2.0;
        }
        else
        {
            return mergedArray[n / 2];
        }
    }

    public static void Main(string[] args)
    {
        var s = new Solution();

        // Test Case 1: Odd total length
        int[] nums1_1 = { 1, 3 };
        int[] nums2_1 = { 2 };
        Console.WriteLine("Test 1: Median = " + s.FindMedianSortedArrays(nums1_1, nums2_1));

        // Test Case 2: Even total length
        int[] nums1_2 = { 1, 2 };
        int[] nums2_2 = { 3, 4 };
        Console.WriteLine("Test 2: Median = " + s.FindMedianSortedArrays(nums1_2, nums2_2));

        // Test Case 3: One array empty
        int[] nums1_3 = { };
        int[] nums2_3 = { 1 };
        Console.WriteLine("Test 3: Median = " + s.FindMedianSortedArrays(nums1_3, nums2_3));

        // Test Case 4: Arrays with duplicate values
        int[] nums1_4 = { 1, 2, 2 };
        int[] nums2_4 = { 2, 3, 4 };
        Console.WriteLine("Test 4: Median = " + s.FindMedianSortedArrays(nums1_4, nums2_4));

        // Test Case 5: Arrays with negative numbers
        int[] nums1_5 = { -5, -3, -1 };
        int[] nums2_5 = { 2, 4, 6 };
        Console.WriteLine("Test 5: Median = " + s.FindMedianSortedArrays(nums1_5, nums2_5));
    }
}
