class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0){
                nums[i] = 0;
            } else {
                nums[i] = 1;
            }
        }
        int i = 0, j = nums.size() - 1;
          while(i < j) {
            if(nums[i] == 0) { i++; }
            else if(nums[j] == 1) { j--; }
            else {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }

        return nums;
    }
};