#include <bits/stdc++.h>
using namespace std;
class Graph{
    int v;
    list<int> *l;
    public:
     Graph(int v){
        this->v = v;
        l = new list<int>[v];
        //arr = new int[v]
     }
     void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
     }
     void printadjlist(){
        for(int i=0; i<v; i++){
            cout<<i<<":";
            for(int neigh : l[i]){
                cout << neigh<<",";
            }
            cout<<endl;
        }

     }
     void bfs(){
     queue<int> q;
     vector<bool> vis(v,false);
     q.push(0);
     vis[0] = true;
     while(q.size()>0){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int v : l[u]){
            if(!vis[v]){
                vis[v]=true;
                q.push(v);
            }
        }

     }

} 
void dfshelper(int u,vector<bool> &arr){//O(V+E)
    cout << u << " ";
    arr[u] = true;
    for(int val : l[u]){
        if(!arr[val]){
            dfshelper(val,arr);
        }
    }

}
void dfs(){
    int src=0;
    vector<bool> arr(v,false);
    dfshelper(src,arr);
}
bool iscyclehelper(int src, int par, vector<bool> &vis){
    vis[src] = true;

    for(int val : l[src]){
        if(!vis[val]){
            if(iscyclehelper(val, src, vis)) return true;
        }
        else if(val != par){
            return true;
        }
    }
    return false;
}

bool iscycle(){
    vector<bool> vis(v,false);
    for(int i=0; i<v; i++){
        if(!vis[i]){
            if(iscyclehelper(i, -1, vis)){
                return true;
            }
        }
    }
    return false;
}
bool iscyclebfshelp(int src,  vector<bool> &vis){
queue<pair<int,int>> q;
q.push({src,-1});
vis[src]=true;
while(!q.empty()){
    int m = q.front().first; 
    int mpar = q.front().second;
    q.pop();

for(int v : l[m]){
  
    if(!vis[v]){
      vis[v]=true;
      q.push({v,m});
    }
    else if(mpar!=v){
        return true;
    }
}
}
return false;
}
bool iscyclebfs(){
vector<bool> vis(v,false);
    for(int i=0; i<v; i++){
        if(!vis[i]){
            if(iscyclebfshelp(i, vis)){
                return true;
            }
        }
    }
    return false;
}
};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
   
    g.addEdge(2,4);
    g. printadjlist();
    cout<<"bfs:"<<" ";
    g.bfs();
    cout<<endl;
    cout<<"dfs:"<<" ";
    g.dfs();
    cout<<endl;
    cout<<g.iscycle();
    cout<<endl;
    cout<<g.iscyclebfs();
    return 0;
}