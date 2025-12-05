#include <bits/stdc++.h>
using namespace std;


int beautifulTriplets(int d, vector<int> arr) {
    unordered_set<int> s(arr.begin(), arr.end());
    int count = 0;

    for (int x : arr) {
        if (s.count(x + d) && s.count(x + 2*d)) {
            count++;
        }
    }
    return count;
}



int main(){
int d=1;
 vector<int> arr = {1 2 4 5 7 8 10 };
cout<<beautifulTriplets( d, arr);

    return 0;
}