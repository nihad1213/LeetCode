class Solution
  def length_of_longest_substring(s)
    length = s.length
    max_length = 0

    (0...length).each do |i|
      arr = []
      (i...length).each do |j|
        if arr.include?(s[j])
          break
        else
          arr << s[j]
        end
      end
      max_length = [max_length, arr.size].max
    end

    max_length
  end
end

solution = Solution.new

puts solution.length_of_longest_substring("abcabcbb")
puts solution.length_of_longest_substring("bbbbb")
puts solution.length_of_longest_substring("pwwkew")
