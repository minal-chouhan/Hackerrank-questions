#include <bits/stdc++.h>
using namespace std;

vector<int> serviceLane(int n, vector<vector<int>> cases, vector<int> width) {
    vector<int> result;

    for (int i = 0; i < cases.size(); i++) {

        int st = cases[i][0];
        int en = cases[i][1];

        int minimum = INT_MAX;

        for (int j = st; j <= en; j++) {
            minimum = min(minimum, width[j]);
        }

        result.push_back(minimum);
    }

    return result;
}


int main(){
    int n=6;
vector<int> width = {2,3,6,4,5,1};
vector<vector<int>> cases = {
    {1,2} ,
     {3,5}
};
vector<int> result = serviceLane(n,  cases,  width);
for(int cas : result){
    cout<<cas;
}  
return 0;
}