class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewel(jewels.begin(), jewels.end());

        int count = 0;
        for (char ch : stones) {
            if(jewel.find(ch) != jewel.end() ) count++;
        }
        return count;

    }
};