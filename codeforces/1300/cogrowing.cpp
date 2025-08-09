#include <bits/stdc++.h>
using namespace std;

int f(int x, int y){
    return x & ~y;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    
    vector<int> ans(n, 0);
    for(int i = 1; i<n; i++){
        ans[i] = f(a[i-1]^ans[i-1], a[i]);
    }

    for(int i = 0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1547/D