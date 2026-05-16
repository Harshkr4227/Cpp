class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101, 0);
        for (int x : nums) {
            count[x]++;
        }

        int runningSum = 0;
        for (int i = 0; i <= 100; i++) {
            int temp = count[i];
            count[i] = runningSum;
            runningSum += temp;
        }

        vector<int> ans;
        for (int x : nums) {
            ans.push_back(count[x]);
        }
        return ans;
    }
};