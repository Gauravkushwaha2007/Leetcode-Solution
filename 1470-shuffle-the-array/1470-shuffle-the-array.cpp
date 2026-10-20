class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> ans(nums.size());
        // int j = 1;
        // int k = 0;

        // int i = 0;
        // while ( i < n) ) {
        //     ans[i] = nums[i];
        //     ans[i+1] = nums[i+n];
        //     i+=2;
        // } 

        int ptr = 0; 
        for ( int i = 0 ; i < n; i++ ) {
            ans[ptr] = nums[i];
            ans[++ptr] = nums[i+n];
            ptr++;
        }

        return ans;
    }
};