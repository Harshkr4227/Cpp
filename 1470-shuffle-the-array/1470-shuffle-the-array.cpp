class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> nums1(2 * n);
        for(int j = 0; j < n; j++) {
            nums1[2 * j] = nums[j];
            nums1[2 * j + 1] = nums[j + n];
        }
        return nums1;
    }
};