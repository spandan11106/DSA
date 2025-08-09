#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    for(int i = 2; i<30; i++){
        int div = (1 << i) - 1;
        if(n%div == 0){
            cout << n/div << endl;
            return;
        }
    }   

    return;
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

// https://codeforces.com/problemset/problem/1343/A