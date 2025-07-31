#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    s += s; 

    if (c == 'g') {
        cout << 0 << endl;
        return;
    }

    int ans = 0;
    int last_g = -1;
    vector<int> next_g(2 * n + 1, -1);
    for (int i = 2 * n - 1; i >= 0; --i) {
        if (s[i] == 'g') last_g = i;
        next_g[i] = last_g;
    }

    for (int i = 0; i < n; ++i) {
        if (s[i] == c) {
            int j = next_g[i];
            if (j != -1) {
                ans = max(ans, j - i);
            }
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1744/C