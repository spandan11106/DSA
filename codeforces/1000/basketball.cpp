#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, d;
    cin >> n >> d;
    vector<int> p(n);
    for(auto &x : p) cin >> x;

    sort(p.rbegin(), p.rend());
    int ans = 0;
    int done = n;
    for(int i = 0; i<n; i++){
        int req = (d)/p[i] + 1;
        done -= req;
        if(done < 0) break;
        ans++;
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

// https://codeforces.com/contest/1725/problem/B