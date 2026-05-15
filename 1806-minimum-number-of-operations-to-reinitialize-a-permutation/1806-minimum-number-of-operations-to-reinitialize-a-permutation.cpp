class Solution {
public:
    int reinitializePermutation(int n) {
        int ops = 0;
        int i = 1;
        while(true) {
            if (i % 2 == 0) {
                i = i / 2;
            } else {
                i = n / 2 + (i - 1) / 2;
            }
            ops++;
            if (i == 1) break; 
        }
        return ops;
    }
};