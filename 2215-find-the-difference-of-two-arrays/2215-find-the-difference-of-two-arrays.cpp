class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        unordered_set<int> s1;
        unordered_set<int> s2;

        for(int val : nums1) {
            s1.insert(val);
        }
        for (int val : nums2) {
            s2.insert(val);
        }

        for (int x : s1) {
            if (s2.find(x) == s2.end()) {
                ans[0].push_back(x);
            }
        }
        for (int x : s2) {
            if (s1.find(x) == s1.end()) {
                ans[1].push_back(x);
            }
        }
        return ans;
    }
};