# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def two_sum(nums, target)
    nums.each_with_index do |num1, i|
        ((i + 1)...nums.length).each do |j|
            return [i, j] if num1 + nums[j] == target
        end
    end

    []
end
puts two_sum([2, 7, 11, 15], 9)
puts two_sum([3, 2, 4], 6)
puts two_sum([3, 3], 6)
