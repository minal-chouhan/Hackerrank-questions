#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c) {
int n=c.size();
int jumps=0;
for(int i=0; i<n-1; i++){
    if(c[i+2] == 0){
        i++;
    }
    jumps++;
}
return jumps;
}


int main(){
vector<int> c={0,1,0,0,0,1,0};

cout<<jumpingOnClouds(c);

    return 0;
}