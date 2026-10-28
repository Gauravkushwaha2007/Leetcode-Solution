class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end()); 
        int length = 0, count = 0;
        auto endPoint = s.end();

        for (int val : s) {
            count = 0;
            if (s.find(val-1) == endPoint) {
                while (s.find(val+count) != endPoint){
                    count++;
                }
            }
            
            length = max(length, count);

        }
        return length;
    }
};