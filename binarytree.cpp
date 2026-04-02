#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int val){
        data = val;
        right = left = NULL; 
    }
    
};
static int idx =-1;
Node* buildtree( vector<int> &preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildtree(preorder);
    root->right = buildtree(preorder);
    return root;
}
void levelorder(Node* root){
    stack<Node*> st1;
    stack<Node*> st2;
    Node* node = root;
 
    st1.push(node);
    st2.push(node);
    while(!st1.empty()){
        Node* curr = st1.top();
        st2.push(curr);
        st1.pop();
        if(curr->left) st1.push(curr->left);
        if(curr->right) st1.push(curr->right);
        
    }
    while(!st2.empty()){
        Node* curr = st2.top();
       // cout<<curr->data<<" ";
        st2.pop();
    }
    
    
}
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int left1 = height(root->left);
    int right1 = height(root->right);
    return max(left1,right1)+1;
    
}
int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
     int left1 = height(root->left);
    int right1 = height(root->right);
    return max(left1,right1)+1;
}
int sumNodes(Node* root){
    if(root == NULL){
        return 0;
    }
     int left1 = sumNodes(root->left);
    int right1 = sumNodes(root->right);
    return (left1+right1+root->data);
}
int main() {
  vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
  Node* root = buildtree(preorder);
  levelorder(root);
  height(root);
  countNodes(root);
  cout<<sumNodes(root);
    return 0;
}