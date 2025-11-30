class Solution:
    def isPalindrome(self, x: int) -> bool:
        s = str(x)
        return s == s[::-1]


solution = Solution()
test1 = solution.isPalindrome(121)
test2 = solution.isPalindrome(-121)
test3 = solution.isPalindrome(10)

print(test1)
print(test2)
print(test3)
