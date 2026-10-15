class Solution {
public:
    int findMin(vector<int>& nums) {
        int minimum = INT_MAX;

        for (int num: nums) {
            minimum = min(num, minimum);
        }

        return minimum;
    }
};