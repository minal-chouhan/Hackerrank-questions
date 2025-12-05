#include <bits/stdc++.h>
using namespace std;

int countPath(int i, int j, int n, int m){
    if(i == n-1 || j == m-1){
        return 1;
    }
    if(i==n || j==n){
        return 0;
    }
    //down
   int down = countPath(i+1,j,n,m);

    //right
   int right = countPath(i,j+1,n,m);

    return down+right;

}

int main(){
int n=3,m=3;
int totalPath = countPath(0,0,n,m);
cout << totalPath;

    return 0;
}