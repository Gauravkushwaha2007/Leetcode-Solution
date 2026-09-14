class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int rec1topright = rec1[2] + rec1[3];
        int rec2bottomleft = rec2[0] + rec2[1];

        if ( (rec1[0] < rec2[2] && rec2[0] < rec1[2]) && (rec1[1] < rec2[3] && rec2[1] < rec1[3])) {
            return true;
        }
        return false;


    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna