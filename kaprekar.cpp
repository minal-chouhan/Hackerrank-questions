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
