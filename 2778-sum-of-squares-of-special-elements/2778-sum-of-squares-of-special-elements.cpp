class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int mat = 0;
        for(int i = 0; i < n; i++) {
            if(n % (i + 1) == 0) {
                mat += nums[i] * nums[i];
            }
        }
        return mat;
    }
};