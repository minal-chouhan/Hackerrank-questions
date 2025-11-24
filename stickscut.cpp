#include <bits/stdc++.h>
using namespace std;

vector<int> cutTheSticks(vector<int> arr) {
vector<int> ans;

//brute force tc o(n**2)
// while(!arr.empty()){
//     int n = arr.size();
//      ans.push_back(n);  
//     int min = *min_element(arr.begin(),arr.end());
    
//     for(int i=0; i<n ; i++)
//         {arr[i] -= min;}
        
//         arr.erase(remove(arr.begin(),arr.end(),0) , arr.end());
        
    
// }




//optimize tc O(nlogn)

sort(arr.begin(),arr.end());
int n= arr.size();
ans.push_back(n);

for(int i=1;i<n;i++){
    if(arr[i] != arr[i-1]){
        ans.push_back(n-i);
    }
}

return ans;

}
int main(){
    vector<int> arr ={1,2,3};
  vector<int> result = cutTheSticks(arr);

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}