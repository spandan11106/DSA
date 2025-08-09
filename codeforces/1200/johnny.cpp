#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> there;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        there.insert(a[i]);
    }

    for (int k = 1; k < 1025; k++) {
        bool good = true;
        for (auto x : a) {
            if (there.find(x ^ k) == there.end()) {
                good = false;
                break;
            }
        }
        if (good) {
            cout << k << endl;
            return;
        }
    }
    cout << -1 << endl;
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


// https://codeforces.com/problemset/problem/1362/B