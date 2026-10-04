class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        int i = 0;
        int j = i+k-1;
        bool firstTime = true;

        double temp = 0;
        while( j < nums.size()) {
            if(firstTime){
                for (int l = i; l <= j; l++ ) {
                    temp += nums[l];
                }
                firstTime = false;
            }else{
                temp = temp-nums[i-1]+nums[j];
            }
            

            ans = max(ans, temp/k );
            i++;
            j=i+k-1;
        }
        return ans;
    }
};