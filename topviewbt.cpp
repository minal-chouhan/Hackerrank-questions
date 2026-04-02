#include <bits/stdc++.h>
#include <iostream>
using namespace std; 

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
      data = val;
      left = right= NULL;
    }
};
static int idx =-1;
Node* buildtree(vector<int>& preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildtree(preorder);
    root->right = buildtree(preorder);

    return root;
}

void topView(Node* root){
    queue<pair<Node*,int>> q;//(node,hd)
    map<int,int> map;//<hd,node val>
    q.push({root,0});
    while(q.size()>0){
        Node* curr = q.front().first;
        int currhd = q.front().second;
        q.pop();
        if(map.find(currhd)==map.end()){
          map[currhd] = curr->data;
        }
        if(curr->left != NULL){
            q.push({curr->left,currhd-1});
        }
        if(curr->right != NULL){
            q.push({curr->right,currhd+1});
        }
    }
    // for(auto & val:map){
    //     cout<<val.second<<" ";
    // }

}
void kthlevel(Node* root, int k){
    if (root == NULL){
        return ;
    }
    if(k==1){
        cout<<root->data <<" ";
    }
    kthlevel(root->left,k-1);
    kthlevel(root->right,k-1);

}

int main() {
  vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
  Node* root = buildtree(preorder);
  topView(root);
  kthlevel(root,2);
    return 0;
}