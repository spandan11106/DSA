#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> pos;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vector<int> a(m);
        for (int j = 0; j < m; j++) {
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        pos.push_back({a[1], a[0]}); 
    }

    sort(pos.rbegin(), pos.rend());

    if(n == 1){
        cout << pos[0].second << endl;
        return;
    }
    long long ans = 0;
    int last_add = INT_MAX; 
    for (int i = 0; i < n-1; i++) {
        ans += pos[i].first; 
        last_add = min(last_add, pos[i].second);
    }

    ans += min(last_add, pos[n-1].second);

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

// https://codeforces.com/problemset/problem/1859/B