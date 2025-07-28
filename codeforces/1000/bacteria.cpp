#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long x;
    cin >> x;
    long long ans = 0;

    while(x > 0){
        if(x%2 == 0){
            x = x/2;
        }
        else{
            x -= 1;
            ans++;
        }
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

// https://codeforces.com/problemset/problem/579/A