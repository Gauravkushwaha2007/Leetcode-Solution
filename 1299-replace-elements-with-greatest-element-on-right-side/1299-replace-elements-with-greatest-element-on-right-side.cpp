class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for (int i = 0; i < arr.size()-1; i++ ) {
            int maxEle = arr[i+1];
            for(int j = i+1; j < arr.size(); j++) {
                maxEle = max(maxEle, arr[j]);
            }
            arr[i] = maxEle;
        }
        arr[arr.size()-1] = -1;
        return arr;
    }
};