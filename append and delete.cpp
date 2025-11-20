#include <bits/stdc++.h>
using  namespace std;
string appendAndDelete(string s, string t, int k) {
    
    
int i=0 ;
int n = s.size(), m=t.size();
while(i<n && i<m && s[i]==t[i]) i++;
int required = (n-i) + (m-i);
if(k<required) return "No";

if((k -required )% 2 == 0) return "Yes";
if(k >= n+m) return "Yes";
return "No";
}
int main(){
    string s = "abc";
    string t="def";
    int k=2;
    cout<<appendAndDelete( s,  t,  k);

    return 0;
}