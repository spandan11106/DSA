#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();

    int res = 0;
    
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            string sub = a.substr(i, j - i + 1);
            if(b.find(sub) != string::npos){
                int len = j - i + 1;
                res = max(res, len);
            }
        }
    }

    cout << n + m - 2*res << endl;
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

// https://codeforces.com/problemset/problem/1506/C