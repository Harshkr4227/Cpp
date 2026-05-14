class Solution {
public:
    int minAllOneMultiple(int k) {
        int rem;
        int count = 1;
        rem = 1 % k;
        while (rem != 0) {
            if (k % 2 == 0 || k % 5 == 0) return -1;
            rem = (rem * 10 + 1) % k;
            count++;
        }
        return count;
    }
};