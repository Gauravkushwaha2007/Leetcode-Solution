class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.size(); i++ ) {
            s[i] = tolower(s[i]);
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna