#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a) {
      cin >> x;
      x %= k;
      if (!x) x = k;
    }

    vector<int> b(n);
    iota(b.begin(), b.end(), 0);
    stable_sort(b.begin(), b.end(), [&](int i, int j) {
      return a[i] > a[j];
    });
    for (auto &x : b) cout << x + 1 << ' ';
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1849/B