#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    long long sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    
    if(l == 1 && r == n){
        cout << sum << endl;
        return; 
    }

    vector<int> pre = a;
    sort(pre.begin(), pre.begin() + r); 

    vector<int> suf = a;
    sort(suf.begin() + l - 1, suf.end(), greater<int>());

    long long prefix_sum = 0;
    for(int i = 0; i < r-l+1; i++){
        prefix_sum += pre[i];
    }

    long long suffix_sum = 0;
    for(int i = n-1; i >= n - 1 - (r-l); i--){
        suffix_sum += suf[i];
    }

    cout << min(prefix_sum, suffix_sum) << endl;
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

// https://codeforces.com/problemset/problem/2063/B