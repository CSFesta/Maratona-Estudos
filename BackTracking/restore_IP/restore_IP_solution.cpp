/*
class Solution {
public:


    vector<string> allValidIP;

    bool valid_substr(const string &substr) {
        if (substr.size() > 3) return false;
        if (substr.size() > 1 && substr[0] == '0') return false; // No leading zeros
        int val = stoi(substr);
        return val <= 255;
    }

    void backtrack(string &str, string substr, int at, int cur_index) {
        if (at == 4 && cur_index == str.size()) {
            allValidIP.push_back(substr);
            return;
        }
        if (at == 4 || cur_index >= str.size()) return;

        for (int len = 1; len <= 3 && cur_index + len <= str.size(); len++) {
            string part = str.substr(cur_index, len);
            if (valid_substr(part)) {
                backtrack(str, substr + (at == 0 ? "" : ".") + part, at + 1, cur_index + len);
            }
        }
    }
    vector<string> restoreIpAddresses(string str) {
        backtrack(str, "", 0, 0);
        return allValidIP;
    }
};
*/