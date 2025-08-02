#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0, bal = 0;

    for(int i = 0; i<n; i++){
        if(s[i] == '(') bal++;
        else{
            bal--;
            if(bal < 0){
                bal = 0;
                ans++;
            }
        }
    }

    cout << ans << endl;
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

// https://codeforces.com/problemset/problem/1374/C