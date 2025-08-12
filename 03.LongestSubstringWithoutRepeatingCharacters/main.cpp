#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.length();
        int maxLength = 0;
        
        for (int i = 0; i < length; i++) {
            vector<char> myArr;
            for (int j = i; j < length; j++) {
                if (find(myArr.begin(), myArr.end(), s[j]) != myArr.end()) {
                    break;
                } else {
                    myArr.push_back(s[j]);
                }
            }   
            if ((int)myArr.size() > maxLength) {
                maxLength = myArr.size();
            }
        }
        return maxLength;
    }
};

int main() {
    
    Solution solution;
    
    cout << solution.lengthOfLongestSubstring("abcabcbb") << "\n";
    cout << solution.lengthOfLongestSubstring("bbbbb") << "\n";
    cout << solution.lengthOfLongestSubstring("pwwkew") << "\n";
    
    return 0;
}
