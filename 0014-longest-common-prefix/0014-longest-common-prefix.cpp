class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        for ( int i = 0; i < strs[0].size(); i++) {
            char prefix = strs[0][i];
            for ( int j = 0; j < strs.size(); j++) {
                if ( strs[j][i] != prefix) {
                    return ans;
                }
            }
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna