class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        length = len(s)
        max_length = 0

        for i in range(length):
            arr = []
            for j in range(i, length):
                if s[j] in arr:
                    break
                else:
                    arr.append(s[j])
            if len(arr) > max_length:
                max_length = len(arr)

        return max_length


solution = Solution()

print(solution.lengthOfLongestSubstring("abcabcbb"))
print(solution.lengthOfLongestSubstring("bbbbb"))
print(solution.lengthOfLongestSubstring("pwwkew"))
