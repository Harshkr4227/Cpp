class Solution {
public:
    set<vector<int>> s;
    void getAllComb(vector<int>& arr, int i, int tar, vector<vector<int>>& ans, vector<int>& combin) {

        if(i == arr.size() || tar<0) return;
        if(tar == 0) {
            if(s.find (combin) == s.end())  {
                ans.push_back(combin);
                s.insert(combin); 
            }
            return;
        }
        combin.push_back(arr[i]);
        getAllComb(arr, i + 1, tar - arr[i], ans, combin);
        getAllComb(arr, i, tar - arr[i], ans, combin);
        combin.pop_back();
        getAllComb(arr, i + 1, tar, ans, combin);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combin;

        getAllComb(candidates, 0, target, ans, combin);

        return ans;
    }
};