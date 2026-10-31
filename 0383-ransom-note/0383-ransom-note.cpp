class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_set<char> s(ransomNote.begin(), ransomNote.end());

        unordered_map<char, int> ransom;
        unordered_map<char, int> magazi;


        for(char ch : ransomNote) {
            ransom[ch]++;
        }

        for(char ch : magazine) {
            magazi[ch]++;
        }

        for (auto val : ransom ) {
            char ch = val.first;
            int count = val.second;
            if (magazi[ch] < count) return false;
            
        }
        return true;
    }
};