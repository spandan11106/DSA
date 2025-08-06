#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int k = 0;
    while((1 << (k + 1)) <= n - 1) ++k; 
    for(int i = (1 << k) - 1; i >= 0; i--) {
        cout << i << ' ';
    }
    for(int i = (1 << k); i < n; i++) {
        cout << i << ' ';
    }
    cout << '\n';
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

// https://codeforces.com/problemset/problem/1632/B