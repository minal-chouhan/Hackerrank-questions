#include <bits/stdc++.h>
using namespace std;

//optimized using hash map
// int minimumDistances(vector<int> &a) {
//     unordered_map<int, int> last;
//     int minDist = INT_MAX;

//     for(int i = 0; i < a.size(); i++) {
//         if(last.find(a[i]) != last.end()) {
//             minDist = min(minDist, i - last[a[i]]);
//         }
//         last[a[i]] = i;
//     }

//     return (minDist == INT_MAX ? -1 : minDist);
// }

//tc o(n**2) sc o(1)


int minimumDistances(vector<int> a) {
    int n = a.size(), min1= INT_MAX;
for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(a[i] == a[j]){
            int dist = j-i;
            min1 = min(min1,dist);
        }
    }
}
   if(min1!=INT_MAX) return min1;
    else{
        return -1;
    }
}

int main(){
    vector<int> a = {3,2,1,3,2};
    cout<<minimumDistances(a);
    return 0;
}