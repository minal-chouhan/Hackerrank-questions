#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void helper( vector<vector<int>>& mat,int row, int col,string path,vector<vector<bool>>& vis,vector<string>& ans ){
    int n = mat.size();
    if(row<0 || col<0 ||  row>=n || col>=n || vis[row][col] == true ||mat[row][col]==0){
        return;
    }
    if(row == n-1 && col == n-1){
        ans.push_back(path);
        return;
    }
    vis[row][col] = true;
    
    helper(mat,row+1,col,path+'D', vis,ans);
    helper(mat,row-1,col,path+'U', vis,ans);
    helper(mat,row,col+1,path+'R', vis,ans);
    helper(mat,row,col-1,path+'L', vis,ans);
    
    vis[row][col] = false;
 }

int main() {
   vector<vector<int>> mat = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
   string path = "";
   int n = mat.size();
   vector<vector<bool>> vis(n,vector<bool>(n,false));
   vector<string> ans;
   helper(mat,0,0,path, vis,ans);
   for(string val : ans){
       cout << val<<endl;
   }
   
    return 0;
}