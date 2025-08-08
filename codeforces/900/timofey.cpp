#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    for(int i = 0; i <= n-i-1; i++){
        if(i%2 - 1){
            swap(a[i], a[n-i-1]);
        }
    }

    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

// https://codeforces.com/problemset/problem/764/B