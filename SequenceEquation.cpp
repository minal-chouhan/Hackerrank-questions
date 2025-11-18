#include <iostream>
#include <vector>
using namespace std;

vector<int> permutationEquation(vector<int> p) {
    int n = p.size();
    
    // shifting index so p[1] = first element
    p.insert(p.begin(), 0);

    vector<int> ans(n + 1);

    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            if (p[p[y]] == x) {
                ans[x] = y;
            }
        }
    }

    ans.erase(ans.begin());  // removing index 0
    return ans;
}

int main() {
    vector<int> p = {1, 2, 3, 4};

    vector<int> result = permutationEquation(p);

    // printing the vector
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
