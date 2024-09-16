class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freqMap;
        for (char c : s) {
            freqMap[c]++;
        }

        int length = 0;
        bool oddFound = false;

        for (auto& entry : freqMap) {
            int freq = entry.second;
            if (freq % 2 == 0) {
                length += freq;
            } else {
                length += freq - 1; 
                oddFound = true;
            }
        }

        if (oddFound) {
            length += 1; 
        }

        return length;
    }
};
