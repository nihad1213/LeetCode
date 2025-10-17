from typing import List

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        merged_array = sorted(nums1 + nums2)
        total = len(merged_array)
        if total % 2 == 0:
            mid1 = merged_array[total // 2 - 1]
            mid2 = merged_array[total // 2]
            return (mid1 + mid2) / 2.0
        else:
            return float(merged_array[total // 2])
