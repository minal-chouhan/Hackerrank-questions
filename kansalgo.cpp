#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    list<int>* l;

public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    void addedge(int u, int v) {
        l[u].push_back(v);
    }

    void topsort() {
        vector<int> res;

        // Step 1: calculate indegree
        vector<int> indeg(V, 0);
        for (int i = 0; i < V; i++) {
            for (int v : l[i]) {
                indeg[v]++;
            }
        }

        // Step 2: push nodes with indegree 0 into queue
        queue<int> q;
        for (int i = 0; i < V; i++) {
            if (indeg[i] == 0) {
                q.push(i);
            }
        }

        // Step 3: BFS (Kahn's Algorithm)
        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            res.push_back(curr);

            for (int v : l[curr]) {
                indeg[v]--;
                if (indeg[v] == 0) {
                    q.push(v);
                }
            }
        }

        // Step 4: print result
        for (int val : res) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    Graph g(6);

    g.addedge(3, 1);
    g.addedge(2, 3);
    g.addedge(4, 0);
    g.addedge(5, 0);
    g.addedge(5, 2);
    g.addedge(4, 1);

    g.topsort();

    return 0;
}