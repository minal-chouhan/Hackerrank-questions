#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int> primefact(int val){
    vector<int> prim;
    int i=2;
    while(val>1 && i<=val){
        if(val%i==0){
            val/=i;
            prim.push_back(i);
        }
        
        else{
            i+=1;
        }
    }
    return prim;
}
int main() {
 
 vector<int> arr = {7,12,18};
 vector<vector<int>> ans;
 for(int val : arr){
     ans.push_back(primefact(val));
 }
 int n=ans.size();
 int m = ans[0].size();
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}