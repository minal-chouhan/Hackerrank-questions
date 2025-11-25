#include <bits/stdc++.h>
using namespace std;
// tc=o(n)  sc=o(1)
int equalizeArray(vector<int> arr) {
vector<int> freq(100,0);
int size = arr.size();
for(int x:arr){
    freq[x]++;
}
int max = *max_element(freq.begin(),freq.end());

return size-max; 
}
// optimized code
// int equalizeArray(vector<int> arr) {
//     unordered_map<int,int> freq;
//     int size = arr.size();

//     for(int x : arr){
//         freq[x]++;
//     }

//     int maxFreq = 0;
//     for(auto &p : freq){
//         maxFreq = max(maxFreq, p.second);
//     }

//     return size - maxFreq;
// }


int main(){
vector<int> arr = {1,2,3,2};
cout << equalizeArray(arr);
    return 0;
}