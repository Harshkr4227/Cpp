class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n = nums.size();
        int freq1 = 0, freq2 = 0;
        int result1 = 0, result2 = 1;
        for (int val : nums) {
            if (val == result1) freq1++;
            else if (val == result2) freq2++;
            else if (freq1 == 0) {
                result1 = val;
                freq1 = 1;
            }
            else if (freq2 == 0) {
                result2 = val;
                freq2 = 1;
            }
            else {
                freq1--;
                freq2--;
            }
        }

        freq1 = 0;
        freq2 = 0;
        for (int val : nums) {
            if (val == result1) freq1++;
            else if (val == result2) freq2++;
        }
        
        vector<int> ans;
        if (freq1 > n / 3) ans.push_back(result1);
        if (freq2 > n / 3) ans.push_back(result2);

        return ans;
    }
};