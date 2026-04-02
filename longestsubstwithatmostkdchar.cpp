//brute
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    string s = "abcddefg";
    int k=3,max1=0;
    int n=s.size();
    for(int i=0; i<n; i++){
        unordered_map<char,int> map;
        for(int j=i; j<n;j++){
            map[s[j]]++;
            if(map.size()>k) break;
            max1 = max(max1,j-i+1);
        }
    }
cout<<max1;
    return 0;
}
//optimal
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    string s = "abcddefg";
    int k=3,max1=0;
    int n=s.size();
    int l=0;
    unordered_map<char,int> map;
    for(int i=0; i<n; i++){
       map[s[i]-'a']++;
       if(map.size()>k){
           
           map[s[l]-'a']--;
           if(map[l]==0){
               map.erase(map[s[l]-'a']);
           }
           l++;
           
       }
       cout<<i<<""<<l<<endl;
       max1=max(max1,i-l+1);
       
    }
cout<<max1;
    return 0;
}