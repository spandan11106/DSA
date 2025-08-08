#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int large = max(a , max(b, c));
    vector<int> ans(3, 0);
   
    if(b%2 == c%2){
        ans[0] = 1;
    }
    if(c%2 == a%2){
        ans[1] = 1;
    }
    if(a%2 == b%2){
        ans[2] = 1;
    }

    for(auto x : ans) cout << x << " ";
    cout << endl;

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

// https://codeforces.com/problemset/problem/1900/B