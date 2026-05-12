class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int apples = 0;
        int current = 0;
        int c = capacity.size();
        int used = 0;
        for(int i : apple) {
            apples += i;
        }
        for (int i = 0; i < c - 1; ++i) {
            for (int j = 0; j < c - i - 1; ++j) {
                if (capacity[j] < capacity[j + 1]) {
                    swap(capacity[j], capacity[j + 1]);
                }
            }
        }

        for(int i : capacity) {
            used++;
            current += i;
            if(current >= apples) {
                    return used;
            } 
        }
        return used;
    }
};