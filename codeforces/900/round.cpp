#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];    
    sort(a.begin(),a.end());
    int cnt = 1, ans = 1;
    for(int i = 1; i < n; ++i) {
        if(a[i] - a[i - 1] > k) {
            cnt = 1;
        } else {
            ++cnt;
        }
        ans = max(ans, cnt);
    }
    cout << n - ans << '\n';
}   
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}

