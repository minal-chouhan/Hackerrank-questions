//3760. Maximum Substrings With Distinct Start
#include <bits/stdc++.h>
using namespace std;

int maxDistinct(string s) {
       set<int> S;
        S.insert(s.begin(),s.end());
        return S.size();
    }

int main(){
    string s = "abab";
    cout<< maxDistinct(s);
    return 0;
}