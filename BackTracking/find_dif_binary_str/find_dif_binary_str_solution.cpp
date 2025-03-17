/*
class Solution {
public:

    
    string str = "";
    unordered_set<string> exist_str;

    bool backtrack(vector<string> &vec, string cur, int n){
        if(n == cur.size()){
            if(!exist_str.count(cur)){
                str = cur;
                return true;
            }
            return false;
        }
        cur.push_back('0');
        
        if(backtrack(vec, cur, n)){
            return true;
        }

        cur.pop_back();
        cur.push_back('1');

        if(backtrack(vec, cur, n)){
            return true;
        }
        return false;
    }
    string findDifferentBinaryString(vector<string>& vec) {
        for(const auto &i : vec){
            exist_str.insert(i);
        }
        backtrack(vec, "", vec[0].size());
        return str;
    }
};
*/