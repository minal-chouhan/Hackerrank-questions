#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
   vector<int> arr = {0,1,0,1,0,0};
   int l=0,r=l+1;
   while(r<6){
       if((arr[l]==1) && (arr[r] == 1)){
           
           arr[r]=0;
           cout<<arr[r]<<endl;
           r++;
           l++;
       }
       else{
          arr[r]=1;
           
           r++;
           l++; 
       }
   }
if(arr[l]==1) cout<<"bob";
else cout<<"alice";
    return 0;
}