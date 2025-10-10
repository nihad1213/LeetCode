using System;
using System.Collections.Generic;

public class Solution
{
    public int LengthOfLongestSubstring(string s)
    {
        int length = s.Length;
        int maxLength = 0;

        for (int i = 0; i < length; i++)
        {
            List<char> arr = new List<char>();
            for (int j = i; j < length; j++)
            {
                if (arr.Contains(s[j]))
                {
                    break;
                }
                else
                {
                    arr.Add(s[j]);
                }
            }

            if (arr.Count > maxLength)
            {
                maxLength = arr.Count;
            }
        }

        return maxLength;
    }
}

public class Program
{
    public static void Main()
    {
        Solution solution = new Solution();

        Console.WriteLine(solution.LengthOfLongestSubstring("abcabcbb"));
        Console.WriteLine(solution.LengthOfLongestSubstring("bbbbb"));
        Console.WriteLine(solution.LengthOfLongestSubstring("pwwkew"));
    }
}
