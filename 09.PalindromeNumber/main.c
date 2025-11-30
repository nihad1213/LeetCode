#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return x == reversed || x == reversed / 10;
}

int main() {
    printf("%d\n", isPalindrome(121));
    printf("%d\n", isPalindrome(-121));
    printf("%d\n", isPalindrome(10));
    printf("%d\n", isPalindrome(123454321));
    return 0;
}
