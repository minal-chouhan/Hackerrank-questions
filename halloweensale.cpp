#include <bits/stdc++.h>
using namespace std;


int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    int sum=0,count=0;
while(sum<=s){
    sum+=p;
    if(sum>s) break;
    count+=1;
     p-=d;
     if(p<=m) p=m;
}
return count;

}

int main(){

   int p=20, d=3,  m=6, s=70;
    cout<<howManyGames(p, d, m, s);

    return 0;
}