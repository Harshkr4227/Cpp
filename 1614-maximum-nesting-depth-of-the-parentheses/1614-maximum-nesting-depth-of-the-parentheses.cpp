class Solution {
public:
    int maxDepth(string s) {
        int curr = 0, maxd = 0;
        for (char i : s) {
            if(i == '(') {
                curr++;
                maxd = max(curr, maxd);
            }
            else if (i == ')') curr--;
        }
        return maxd;
    }
};