class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> keys = {"", "", "abc", "def", "ghi",
                               "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> res;
        string cur;
        backtrack(digits, 0, cur, keys, res);
        return res;
    }

private:
    void backtrack(const string& digits, int idx, string& cur,
                   const vector<string>& keys, vector<string>& res) {
        if (idx == digits.size()) {
            res.push_back(cur);
            return;
        }
        for (char c : keys[digits[idx] - '0']) {
            cur.push_back(c);
            backtrack(digits, idx + 1, cur, keys, res);
            cur.pop_back();
        }
    }
};