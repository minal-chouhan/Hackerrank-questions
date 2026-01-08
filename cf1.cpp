#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    //1
   vector<int> arr = {0,1,0,1,0,0};
  int zeros = 0;
for(int x : arr) if(x == 0) zeros++;

if(zeros % 2) cout << "Alice";
else cout << "Bob";



//2
   vector<int> arr = {0 ,1 ,2 ,1 ,0};
   vector<int> cnt(n+1,0);
for(int x : arr) cnt[x]++;

int mex = 0;
while(cnt[mex] >= k) mex++;

cout << mex;



   //3
   

    return 0;
}