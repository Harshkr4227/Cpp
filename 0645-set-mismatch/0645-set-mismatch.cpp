class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dup = -1, m = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i + 1]) {
                dup = nums[i];
            } else if (nums[i + 1] > nums[i] + 1) {
                m = nums[i] + 1;
            }
        }
        if (nums[nums.size() - 1] != nums.size()) {
            m = nums.size();
        }

        return {dup, m};
    }
};