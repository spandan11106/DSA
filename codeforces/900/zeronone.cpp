#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int one = 0, zero = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == '0') zero++;
        else one++;
    }

    int rem = min(one, zero);
    int res = n - 2*rem;

    cout << res << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

// https://codeforces.com/problemset/problem/556/A