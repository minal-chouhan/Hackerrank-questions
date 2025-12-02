#include <bits/stdc++.h>
using namespace std;
int workbook(int n, int k, vector<int> arr) {
    int page = 1;
    int special = 0;

    for (int problems : arr) {
        int start = 1;

        while (start <= problems) {
            int end = min(start + k - 1, problems);

            if (page >= start && page <= end) {
                special++;
            }

            page++;
            start = end + 1;
        }
    }
    return special;
}
// int workbook(int n, int k1, vector<int> arr) {
// int page=1,count=0;
// for(int x:arr){
//     int c=1;
//     while(x!=0){
//         int k=k1;
//         while(k!=0){
//             if(c==page){
//                 count++;
//             }
//             c++;
//             k--;
//             x--;
//              if(x==0) break;
//         }
//         page++;
        
//     }
// }
// return count;
// }

int main(){
int n=2, k=3;
vector<int> arr = {4,2};
    cout<<workbook( n, k, arr);
    return 0;
}