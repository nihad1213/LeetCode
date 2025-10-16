#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int* mergedArray = (int*)malloc((nums1Size + nums2Size) * sizeof(int));
    if (mergedArray == NULL) {
        printf("Memory Fail");
        exit(1);
    }
    
    for (int i = 0; i < nums1Size; i++)
        mergedArray[i] = nums1[i];
    
    for (int i = 0; i < nums2Size; i++)
        mergedArray[i + nums1Size] = nums2[i];
    
    qsort(mergedArray, nums1Size + nums2Size, sizeof(int), compare);
    
    double median;
    
    if ((nums1Size + nums2Size) % 2 == 0)
        median = (mergedArray[(nums1Size + nums2Size) / 2  - 1] + 
        mergedArray[(nums1Size + nums2Size) / 2]) / 2.0;
    else
        median = mergedArray[(nums1Size + nums2Size) / 2];
    
    
    return median;
}

int main() {
    // Test Case 1: Odd total length
    int nums1_1[] = {1, 3};
    int nums2_1[] = {2};
    printf("Test 1: Median = %lf\n", findMedianSortedArrays(nums1_1, 2, nums2_1, 1)); 
    // Expected: 2.0

    // Test Case 2: Even total length
    int nums1_2[] = {1, 2};
    int nums2_2[] = {3, 4};
    printf("Test 2: Median = %lf\n", findMedianSortedArrays(nums1_2, 2, nums2_2, 2)); 
    // Expected: 2.5

    // Test Case 3: One array empty
    int nums1_3[] = {};
    int nums2_3[] = {1};
    printf("Test 3: Median = %lf\n", findMedianSortedArrays(nums1_3, 0, nums2_3, 1)); 
    // Expected: 1.0

    // Test Case 4: Arrays with duplicate values
    int nums1_4[] = {1, 2, 2};
    int nums2_4[] = {2, 3, 4};
    printf("Test 4: Median = %lf\n", findMedianSortedArrays(nums1_4, 3, nums2_4, 3)); 
    // Expected: 2.0

    // Test Case 5: Arrays with negative numbers
    int nums1_5[] = {-5, -3, -1};
    int nums2_5[] = {2, 4, 6};
    printf("Test 5: Median = %lf\n", findMedianSortedArrays(nums1_5, 3, nums2_5, 3)); 
    // Expected: 0.5

    return 0;
}
