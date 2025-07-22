#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    long long diff = a[n-1] - a[0];

    if(diff == 0) {
        long long ans = n * (n - 1);
        cout << ans << "\n";
        return;
    }

    long long min_count = 0, max_count = 0;
    for(long long i = 0; i < n; i++) {
        if(a[i] == a[0]) min_count++;
        if(a[i] == a[n-1]) max_count++;
    }

    cout << 2LL * min_count * max_count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
