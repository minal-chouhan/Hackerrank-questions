#include <bits/stdc++.h>
using namespace std;

bool solve(string s, unordered_set<string>& dict) {

    int n = s.size();

    if(n == 0)
        return true;

    for(int i = 1; i <= n; i++) {

        string prefix = s.substr(0, i);

        if(dict.find(prefix) != dict.end()) {

            if(solve(s.substr(i), dict)) {
                return true;
            }
        }
    }

    return false;
}

int main() {

    string s = "takeuforward";

    vector<string> wordDict = {"take","u","you","forward"};

    unordered_set<string> dict(wordDict.begin(), wordDict.end());

    cout << solve(s, dict);

    return 0;
}