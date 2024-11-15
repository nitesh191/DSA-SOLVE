#include <limits.h> // For INT_MAX and INT_MIN

int reverse(int x) {
    int ans = 0, rem;
    while (x != 0) {
        rem = x % 10;
        x /= 10;
        // Check for overflow/underflow before performing the operation
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && rem > 7)) {
            return 0; // Overflow
        }
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && rem < -8)) {
            return 0; // Underflow
        }
        ans = ans * 10 + rem;
    }
    return ans;
}

