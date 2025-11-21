#include <bits/stdc++.h>
using namespace std;


int squares(int a, int b) {
//brute
// int count=0;
// for(int i=a ; i<=b ; i++){
//    int r = sqrt(i);
//    if(r * r == i){ //checking perfecct square or not
//     count ++;
//    }
// }
// return count;
// }



//optimal

int start = ceil(sqrt(a));
int end = floor(sqrt(b));

if(end<start) return 0;
  
  return end-start+1;

}

int main(){

int a=8;
int b=16;
    cout<<squares( a,  b);

    return 0;
}