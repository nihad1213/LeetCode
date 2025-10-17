#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedArray = nums1;
        mergedArray.insert(mergedArray.end(), nums2.begin(), nums2.end());
        
        sort(mergedArray.begin(), mergedArray.end());
        
        double median;
        int numberOfElements = mergedArray.size();
        
        if (numberOfElements % 2 != 0) {
            median = mergedArray[numberOfElements / 2];
        } else {
            median = (mergedArray[numberOfElements / 2] + mergedArray[numberOfElements / 2 - 1]) / 2.0;
        }
        
        return median;
    }  
};

int main() {
    Solution s;

    // Test Case 1: Odd total length
    std::vector<int> nums1_1 = {1, 3};
    std::vector<int> nums2_1 = {2};
    std::cout << "Test 1: Median = " << s.findMedianSortedArrays(nums1_1, nums2_1) << std::endl;

    // Test Case 2: Even total length
    std::vector<int> nums1_2 = {1, 2};
    std::vector<int> nums2_2 = {3, 4};
    std::cout << "Test 2: Median = " << s.findMedianSortedArrays(nums1_2, nums2_2) << std::endl;

    // Test Case 3: One array empty
    std::vector<int> nums1_3 = {};
    std::vector<int> nums2_3 = {1};
    std::cout << "Test 3: Median = " << s.findMedianSortedArrays(nums1_3, nums2_3) << std::endl;

    // Test Case 4: Arrays with duplicate values
    std::vector<int> nums1_4 = {1, 2, 2};
    std::vector<int> nums2_4 = {2, 3, 4};
    std::cout << "Test 4: Median = " << s.findMedianSortedArrays(nums1_4, nums2_4) << std::endl;

    // Test Case 5: Arrays with negative numbers
    std::vector<int> nums1_5 = {-5, -3, -1};
    std::vector<int> nums2_5 = {2, 4, 6};
    std::cout << "Test 5: Median = " << s.findMedianSortedArrays(nums1_5, nums2_5) << std::endl;

    return 0;
}
