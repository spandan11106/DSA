#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    
    if (a == b){ 
       cout << 0 << endl;
       return;
    }
    if (a > b) swap(a, b);

    if (b % a != 0){
       cout << -1 << endl;
       return;
    }
    
    long long t = b / a;
    int ops = 0;
    
    while (t % 8 == 0) {
        t /= 8;
        ops++;
    }
    while (t % 4 == 0) {
        t /= 4;
        ops++;
    }
    while (t % 2 == 0) {
        t /= 2;
        ops++;
    }
    if (t != 1){ 
        cout << -1 << endl;
        return;
    }
    
    else{
        cout << ops << endl;
        return;
    }
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

// https://codeforces.com/problemset/problem/1362/A