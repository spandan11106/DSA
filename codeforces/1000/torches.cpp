#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long x, y, k;
    cin >> x >> y >> k;
    long long req_st = k + y*k - 1;

    long long count = (req_st + x - 2)/(x - 1);
    cout << count + k << endl;
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

// https://codeforces.com/problemset/problem/1418/A