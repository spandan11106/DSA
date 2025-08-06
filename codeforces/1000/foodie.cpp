#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = a[0];
    int r = a[0];
    int ans = 0;

    for(int i = 1; i<n; i++){
        l = min(l, a[i]);
        r = max(r, a[i]) ;
        if(r - l > 2*x){
            ans++;
            l = a[i];
            r = a[i];
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


// https://codeforces.com/problemset/problem/1704/B