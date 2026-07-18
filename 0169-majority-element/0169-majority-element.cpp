class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        if(nums.size() == 1){
            return nums[0];
        }

        int count = 1;//
        for(int i = 0; i<nums.size()-1; i++){
            int temp = 1;
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i] == nums[j]){
                    temp ++;
                }
            }
            count = max(count, temp);
            if(count > nums.size()/2){
                return nums[i];
            }
        }
        return -1;
        
    }
};