#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    vector<int> arr = {100,80,60,70,60,75,85};
    stack<int> st;
    vector<int> ans;
    for(int i=0; i<arr.size();i++){
      
            while(st.size()>0 && arr[st.top()]<=arr[i]){
                st.pop();
            }
           if(st.size()==0) ans.push_back(i+1);
           else ans.push_back(i-st.top());
           st.push(i);
    }
    for(int val : ans){
        cout << val << endl;
    }

    return 0;
}