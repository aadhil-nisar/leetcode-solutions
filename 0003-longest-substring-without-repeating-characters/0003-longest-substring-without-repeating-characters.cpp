class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(128, -1);  // last index of each ASCII char
        int best = 0, left = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];
            if (last[c] >= left) {
                left = last[c] + 1;
            }
            last[c] = right;
            best = max(best, right - left + 1);
        }
        return best;
    }
};