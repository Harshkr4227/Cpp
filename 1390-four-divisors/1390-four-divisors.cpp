class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sumall = 0;
        for(int val : nums) {
            int count = 0, sum = 0;
            for(int i = 1; i * i <= val; i++) {
                if(val % i == 0) {
                    int other = val / i ;
                    count++;
                    sum += i;

                    if(other != i) {
                        count++;
                        sum += other;
                    }
                    if(count > 4) break;
                }
            }
            if(count == 4) 
            sumall += sum;
        }
        return sumall;
    }
};