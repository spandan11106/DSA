#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int x, y;
    cin >> x >> y;
    vector<int> x_f(k), y_f(k);

    for(int i = 0; i<k; i++){
        cin >> x_f[i] >> y_f[i];
    }

    for(int i = 0; i<k; i++){
        if((x+y)%2 == (x_f[i]+y_f[i])%2){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

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

// https://codeforces.com/problemset/problem/1848/A