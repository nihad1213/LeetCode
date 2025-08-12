#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int length = strlen(s);
    int maxLength = 0;

    for (int i = 0; i < length; i++) {
        char arr[256];
        int arrSize = 0;

        for (int j = i; j < length; j++) {
            int found = 0;
            
            for (int k = 0; k < arrSize; k++) {
                if (arr[k] == s[j]) {
                    found = 1;
                    break;
                }
            }

            if (found) {
                break;
            } else {
                arr[arrSize++] = s[j];
            }
        }

        if (arrSize > maxLength) {
            maxLength = arrSize;
        }
    }

    return maxLength;
}

int main() {
    printf("%d\n", lengthOfLongestSubstring("abcabcbb"));
    printf("%d\n", lengthOfLongestSubstring("bbbbb"));
    printf("%d\n", lengthOfLongestSubstring("pwwkew"));
    return 0;
}
