class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];
            for (int k = 1; k < strs.size(); k++) {
                if (i >= strs[k].size() || strs[k][i] != c) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};