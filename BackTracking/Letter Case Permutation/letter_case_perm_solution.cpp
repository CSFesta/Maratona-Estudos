/*
class Solution {
    public:
    
    
        vector<string> ans;
    
        void backtrack(string &str, int pos){
            if(pos == str.size()){
                ans.emplace_back(str);
                return;
            }
            char temp = str[pos];
            if(isalpha(str[pos])){
                
                str[pos] = toupper(str[pos]);
                
                backtrack(str, pos + 1);
                str[pos] = tolower(str[pos]);
            }
            backtrack(str, pos + 1);
            //str[pos] = temp;
        }
    
        vector<string> letterCasePermutation(string str) {
            backtrack(str, 0);
            return ans;      
        }
    };
*/