class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int window = 0, count = 0;

        for (int i = 0; i < k; i++) {
            window += arr[i];
        }
        if (window/k >= threshold) count++;

        for (int i = k; i < arr.size(); i++) {

            window = window - arr[i-k] + arr[i] ;
            if (window/k >= threshold ) count ++;
        }

        return count;

    }
};