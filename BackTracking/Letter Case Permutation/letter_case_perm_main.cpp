#include <iostream> 
#include <vector>
#include <cctype>


using namespace std;

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
    str[pos] = temp;
}

int main(){
    string str = "a1b2";
    backtrack(str, 0);
    for (const auto &i : ans){
        cout << i << "\n";
    }
    return 0;
}