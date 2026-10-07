class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        if(arr.size()<= 1) return 0;
        int leftSum = 0;
        int rightSum = 0;
        int totalSum = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            totalSum += nums[i]; //
        }

        for (int i = 0; i < arr.size(); i++) {
            rightSum = totalSum - leftSum - arr[i]; 
            if (leftSum == rightSum ) return i;
            leftSum += arr[i];             
        }
        return -1;
    }
};
