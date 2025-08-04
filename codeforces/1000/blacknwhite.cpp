#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> pre(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + (s[i - 1] == 'W' ? 1 : 0);
    }

    int ans = INT_MAX;
    for(int i = k; i <= n; i++) {
        int numB = pre[i] - pre[i - k];
        ans = min(ans, numB);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1690/D