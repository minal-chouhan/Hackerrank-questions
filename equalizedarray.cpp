#include <bits/stdc++.h>
using namespace std;

int equalizeArray(vector<int> arr) {
vector<int> freq(100,0);
int size = arr.size();
for(int x:arr){
    freq[x]++;
}
int max = *max_element(freq.begin(),freq.end());

return size-max; 
}


int main(){
vector<int> arr = {1,2,3,2};
cout << equalizeArray(arr);
    return 0;
}