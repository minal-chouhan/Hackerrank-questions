
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
class Info{
    public:
    int max;
    int min; 
    int sz;
    int sums;
    Info(int mi,int ma, int siz,int sum){
        max= ma;
        min= mi;
        sz= siz;
        sums= sum;
    }
};
int maxsum=0;
Info helper(Node* root){
    if(root == NULL){
        return Info(INT_MAX,INT_MIN,0,0);
    }
    Info left = helper(root->left);
    Info right = helper(root->right);

    if(left.max<root->data && right.min>root->data){
        int currmin = min(root->data,left.min);
        int currmax = max(root->data,right.max);
        int cursz = left.sz+right.sz+1;
        int csum = left.sums+right.sums+root->data;
        maxsum = max(maxsum,csum);
        return Info(currmin,currmax,cursz,csum);
    }
    return Info(INT_MIN,INT_MAX,max(right.sz,left.sz),0);


}
int largestbst(Node* root){
    maxsum = INT_MIN;
    helper(root);
    return maxsum == INT_MIN ? 0 : maxsum;
}
int main(){
Node* root = new Node(10);
root->left = new Node(5);
root->right = new Node(15);
root->left->left = new Node(1);
root->left->right = new Node(8);
root->right->right = new Node(7);

cout << largestbst(root) ;

    return 0;

}