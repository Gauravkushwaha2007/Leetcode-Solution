class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i = 0;
        int j = 0;

        while ( j < t.size() ) {
            if ( s[i] == t[j] ) {
                i++; 
                j++;
            } else{
                j++;
            }
        }
        if ( i >= s.size()) return true;
        else return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna