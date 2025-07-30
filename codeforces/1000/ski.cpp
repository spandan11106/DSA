#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k, q;
    cin >> n >> k >> q;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long ans = 0;
    long long count = 0;  

    for(int i = 0; i < n; i++){
        if(a[i] <= q){
            count++;
        }
        else{
            if(count >= k){
                long long len = count - k + 1;
                ans += (len * (len + 1)) / 2;
            }
            count = 0;
        }
    }

    if(count >= k){
        long long len = count - k + 1;
        ans += (len * (len + 1)) / 2;
    }

    cout << ans << "\n";
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

// https://codeforces.com/problemset/problem/1840/C