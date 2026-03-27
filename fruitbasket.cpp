#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 vector<int> arr = {1, 2, 1};
 int n = arr.size();
 int max1=0;
unordered_map<int,int> bskt;
for(int i=0; i<n; i++){
    int cnt=0;
    for(int j=i;j<n;j++){
        bskt[arr[j]]++;
        if(bskt.size()>2){
            break;
        }
        cnt++;
        
    }
    max1 = max(max1,cnt);
}
cout<<max1;
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 vector<int> arr = {1, 2, 3,2,2};
 int n = arr.size();

 int max1=0,left=0;
unordered_map<int,int> bskt;
for(int i=0; i<n; i++){
   bskt[arr[i]]++;
   
   while(bskt.size()>2){
       bskt[arr[left]]--;
      if(bskt[arr[left]] == 0){
        bskt.erase(arr[left]);
}
       left++;
   }
   max1 = max(max1,i-left+1);
}
cout<<max1;
    return 0;
}