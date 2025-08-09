#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(k);
    int zero = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(a[i] == 0){
            zero = i;
        }
    }
    for(auto &y : b) cin >> y;

    if(k > 1){
        cout << "Yes" << endl;
        return;
    }
    else{
        a[zero] = b[0];
        bool pos = false;

        for(int i = 1; i<n; i++){
            if(a[i] <= a[i-1]){
                pos = true;
                break;
            }
        }
        cout << (pos ? "Yes" : "No") << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

// https://codeforces.com/problemset/problem/814/A