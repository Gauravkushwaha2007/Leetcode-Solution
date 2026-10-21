class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        int num = 1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++ ){
            if ( i <nums.size()-1 && nums[i] == nums[i+1]){
                ans[0] = nums[i];
            }
            if (nums[i] == num ) {
                num++;
            }
            else if ( nums[i] > num){
                ans[1] = num;
                num = nums[i]+1;
            }
        }
        if(ans[1] == 0){
            ans[1] =num;
        }
        return ans;
    }
};