class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int i = 0;
        while(i < nums.size() - 2) {
            if(nums[i] == nums[i + 1] || nums[i] == nums[i + 2]) {
                return nums[i];
            }
            i++;
        }
        return nums.back();
    }
};