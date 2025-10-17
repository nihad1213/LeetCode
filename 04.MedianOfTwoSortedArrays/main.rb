# @param {Integer[]} nums1
# @param {Integer[]} nums2
# @return {Float}
def find_median_sorted_arrays(nums1, nums2)
   merged_array = (nums1 + nums2).sort
    total = merged_array.length
   
    if total.even?
        mid1 = merged_array[total / 2 - 1]
        mid2 = merged_array[total / 2]
        return (mid1 + mid2) / 2.0
    else
        return merged_array[total / 2].to_f
    end
end

puts "Test 1: Median = #{find_median_sorted_arrays([1, 3], [2])}"
puts "Test 2: Median = #{find_median_sorted_arrays([1, 2], [3, 4])}"
puts "Test 3: Median = #{find_median_sorted_arrays([], [1])}"
puts "Test 4: Median = #{find_median_sorted_arrays([1, 2, 2], [2, 3, 4])}"
puts "Test 5: Median = #{find_median_sorted_arrays([-5, -3, -1], [2, 4, 6])}"
