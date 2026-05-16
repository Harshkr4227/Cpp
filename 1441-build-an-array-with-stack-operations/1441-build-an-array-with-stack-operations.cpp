class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> st; int j = 0;
        for(int i = 1; i <= n; i++) {
            if(j == target.size()) break;
            st.push_back("Push");

            if(target[j] == i) {
                j++;
            }
            else {
                st.push_back("Pop");
            }
        }
        return st;
    }
};