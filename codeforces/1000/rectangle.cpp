#include <bits/stdc++.h>
using namespace std;

void solve() {
    int w, h;
    cin >> w >> h;
    
    vector<int> x0, x1, y0, y1;

    int k;
    cin >> k;
    x0.resize(k);
    for (int i = 0; i < k; ++i) cin >> x0[i];

    cin >> k;
    x1.resize(k);
    for (int i = 0; i < k; ++i) cin >> x1[i];

    cin >> k;
    y0.resize(k);
    for (int i = 0; i < k; ++i) cin >> y0[i];

    cin >> k;
    y1.resize(k);
    for (int i = 0; i < k; ++i) cin >> y1[i];

    long long ans = 0;
    ans = max(ans, 1LL * (x0.back() - x0.front()) * h);
    ans = max(ans, 1LL * (x1.back() - x1.front()) * h);
    ans = max(ans, 1LL * (y0.back() - y0.front()) * w);
    ans = max(ans, 1LL * (y1.back() - y1.front()) * w);

    cout << ans << '\n';
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


// https://codeforces.com/problemset/problem/1620/B