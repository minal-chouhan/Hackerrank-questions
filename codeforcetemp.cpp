#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int k = 3;
    vector<int> arr = {6,4,2};
    
    int n = arr.size();
    bool ans = false;
    sort(arr.begin(),arr.end(),[](int a,int b){return a>b;});
    
    for(int i=0;i<=k-2;i++){
        if(arr[i+2]==(arr[i]%arr[i+1]) || (i+2>=n)){
            ans=true;
           
        }
        else{
            ans=false;
            break;
        }
    }

if(ans) cout<<arr[0]<<" "<<arr[1];
else cout << "-1" ;
    return 0;
}