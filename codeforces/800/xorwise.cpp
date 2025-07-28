#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    int res = a^b;
    cout << res << endl;
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

// https://codeforces.com/problemset/problem/1421/A