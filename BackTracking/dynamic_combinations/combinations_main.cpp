#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> allComb;

void backtrack(int n, int k, vector<int> &cur, int start) {
    if (cur.size() == k) {
        allComb.emplace_back(cur);
        return;
    }

    for (int i = start + 1; i <= n; ++i) {
        cur.push_back(i);
        backtrack(n, k, cur, i);
        cur.pop_back();
    }
}

int main() {
    int n = 4;
    int k = 2;

    vector<int> cur;
    backtrack(n, k, cur, 0);

    for (const auto &i : allComb) {
        for (const auto &j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}
