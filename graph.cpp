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
};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g. printadjlist();
    g.bfs();
    return 0;
}