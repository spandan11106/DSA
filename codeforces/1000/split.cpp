#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> prefix_distinct(n), suffix_distinct(n);
    unordered_set<char> seen;

    seen.clear();
    for (int i = 0; i < n; i++) {
        seen.insert(s[i]);
        prefix_distinct[i] = (int)seen.size();
    }

    seen.clear();
    for (int i = n - 1; i >= 0; i--) {
        seen.insert(s[i]);
        suffix_distinct[i] = (int)seen.size();
    }

    int max_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        max_sum = max(max_sum, prefix_distinct[i] + suffix_distinct[i + 1]);
    }

    cout << max_sum << "\n";
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1791/D