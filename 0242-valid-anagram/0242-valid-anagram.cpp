class Solution {
public:
    bool isAnagram(string s, string t) {
        if ( s.size() != t.size() ) {
            return false;
        }
        int arr1[26] = {0};
        int arr2[26] = {0};

        for ( char ch : s ) {
            arr1[ch - 'a']++;
        }
        for ( char ch : t ) {
            arr2[ch - 'a']++;
        }
        
        for ( int i = 0; i < 25; i++ ) {
            if ( arr1[i] != arr2[i] ) {
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna