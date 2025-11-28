#include <bits/stdc++.h>
using namespace std;

int chocolateFeast(int n, int c, int m) {
// int count = 0;
// int free = n/c;
// count+=free;
// int wrapper=0;
// while(free >= m){
//     wrapper = free/m + free%m;
//     count+=free/m;
//     free=wrapper;
// }
// return count;


//optimized
    int chocolates = n / c;     // initial chocolates
    int wrappers = chocolates;  // wrappers = chocolates
    int total = chocolates;

    while (wrappers >= m) {
        int freeChoc = wrappers / m;   // free chocolates
        total += freeChoc;
        wrappers = freeChoc + (wrappers % m); // new wrappers
    }

    return total;
}
int main(){
    int n=15, c=3, m=2;
    cout<< chocolateFeast( n,  c, m) ;
    return 0;
}