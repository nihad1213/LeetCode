var findMedianSortedArrays = function(nums1, nums2) {
    let mergedArray = nums1.concat(nums2).sort((a, b) => a - b);
    let total = mergedArray.length;
    if (total % 2 === 0) {
        return (mergedArray[total / 2 - 1] + mergedArray[total / 2]) / 2;
    } else {
        return mergedArray[Math.floor(total / 2)];
    }
};

console.log("Test 1: Median =", findMedianSortedArrays([1, 3], [2]));
console.log("Test 2: Median =", findMedianSortedArrays([1, 2], [3, 4]));
console.log("Test 3: Median =", findMedianSortedArrays([], [1]));
console.log("Test 4: Median =", findMedianSortedArrays([1, 2, 2], [2, 3, 4]));
console.log("Test 5: Median =", findMedianSortedArrays([-5, -3, -1], [2, 4, 6]));
