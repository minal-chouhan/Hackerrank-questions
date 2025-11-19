#include <bits/stdc++.h>
using namespace std;
// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k) {
int e = 100, n=c.size();
int st = (k+0)%n;
while(st!=0){
    if(c[st] == 1){
        e = e - 3;
    }
    else{
        e = e - 1;
    }
    st=(st+k)%n;
}
if(c[0] == 1) return e-3;
else return e-1;
}
int main(){

vector<int> c = {1,1,0,0,1,0,1,0,1};
int k=2;
cout<<jumpingOnClouds(c,k);
    return 0;
}