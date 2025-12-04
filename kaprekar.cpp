#include <bits/stdc++.h>
using namespace std;

bool isKaprekar(long long n) {
    long long sq = n * n;
    string s = to_string(sq);
    int d = to_string(n).size();

    // Right part (last d digits)
    long long right = 0;
    if (d <= s.size()) {
        right = stoll(s.substr(s.size() - d));
    }

    // Left part (remaining digits)
    long long left = 0;
    if (s.size() - d > 0) {
        left = stoll(s.substr(0, s.size() - d));
    }

    return (left + right == n);
}


// void kaprekarNumbers(int p, int q) {
//     vector<long long> ans;

//     for(long long i = p; i <= q; i++){
//         long long sq = i * i;
//         string s = to_string(sq);

//         int d = s.length();
//         int split = d / 2;

//         string left = s.substr(0, split);
//         string right = s.substr(split);

//         long long L = (left == "") ? 0 : stoll(left);
//         long long R = (right == "") ? 0 : stoll(right);

//         if (L + R == i) {
//             ans.push_back(i);
//         }
//     }

//     if(ans.empty()) {
//         cout << "INVALID RANGE";
//     } else {
//         for(int i=0; i<ans.size(); i++){
//             cout << ans[i] << " ";
//         }
//     }

// }

int main() {
    vector<long long> kaprekarNumbers;

    for (long long i = 0; i <= 1000000; i++) {
        if (isKaprekar(i)) {
            kaprekarNumbers.push_back(i);
        }
    }

    // Print all Kaprekar numbers
    for (long long x : kaprekarNumbers) {
        cout << x << " ";
    }
    return 0;
}
