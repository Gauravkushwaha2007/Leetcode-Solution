class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans1 = 0;
        int ans2 = 0;
        int itr = 0;
        for ( int i = 0; i < nums.size(); i++){  
            ans1 = ans1 ^ nums[i]; 
            ans2 = ans2 ^ ++itr;
        }
        return ans1 ^ ans2; 
    }
};