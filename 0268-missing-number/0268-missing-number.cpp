class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expected_sum = n * (n+1)/2;
        int total_sum = 0;
        for(int i = 0; i < n; i++){
            total_sum += nums[i];
        }
        int difference = expected_sum - total_sum;
        return difference;
    }   
};