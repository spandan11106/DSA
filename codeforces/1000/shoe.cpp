#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> s(n);
    for(int i = 0; i<n; i++){
        cin >> s[i];
    }

    vector<int> ans(n);
    for(int i = 0; i<n; i++){
        ans[i] = i+1;
    }

    bool found = false;
    int l = 0, r = 0;
    while(r < n){
        while(r < n-1 && s[r] == s[r+1]) r++;
        if(l == r) found = true;
        else{
            rotate(ans.begin() + l, ans.begin() + r, ans.begin() + r + 1);
        }
        l = r + 1;
        r++;
    }

    if(found){
        cout << -1 << endl;
    }
    else{
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
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

// https://codeforces.com/problemset/problem/1691/B