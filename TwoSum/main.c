#include <stdlib.h>
#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
	
	for(int i = 0; i < numsSize; i++) {
		for(int j = i + 1; j < numsSize; j++) {
			if(target == nums[i] + nums[j]) {
				result[0] = i;
				result[1] = j;
				*returnSize = 2;
				return result;
			}
		}
	}

	return NULL;
}

int main() {
    int returnSize;

    int nums1[] = {2, 7, 11, 15};
    int* res1 = twoSum(nums1, 4, 9, &returnSize);
    if (res1) {
        printf("[%d, %d]\n", res1[0], res1[1]);
        free(res1);
    } else {
        printf("[]\n");
    }

    int nums2[] = {3, 2, 4};
    int* res2 = twoSum(nums2, 3, 6, &returnSize);
    if (res2) {
        printf("[%d, %d]\n", res2[0], res2[1]);
        free(res2);
    } else {
        printf("[]\n");
    }

    int nums3[] = {3, 3};
    int* res3 = twoSum(nums3, 2, 6, &returnSize);
    if (res3) {
        printf("[%d, %d]\n", res3[0], res3[1]);
        free(res3);
    } else {
        printf("[]\n");
    }

    return 0;
}
