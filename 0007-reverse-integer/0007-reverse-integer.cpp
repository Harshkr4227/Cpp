class Solution {
public:
    int reverse(int x) {
        int rem = 0;
        while (x != 0) {
            int digit = x % 10;
            if (rem > INT_MAX / 10 || (rem == INT_MAX / 10 && digit > 7)) return 0;
            if (rem < INT_MIN / 10 || (rem == INT_MIN / 10 && digit < -8)) return 0;
            rem = (rem * 10) + digit;
            x = x / 10;
        }
        return rem;
    }
};