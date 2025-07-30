#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    long long product = 1;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        product *= a[i];
        product = product%k;
    }

    if(product % k == 0){
        cout << 0 << endl;
        return;
    }
    
    int ans = 100;
    for(int i = 0; i<n; i++){
        int com = a[i] % k;
        com = k - com;
        ans = min(ans, com);
    }
    
    if(k != 4){
        cout << ans << endl;
    }
    else{
        int even = 0, odd = 0;
        for(int i = 0; i<n; i++){
            if(a[i]%2 == 1){
                odd++;
            }
            else even++;
        }
        int ans2;
        if(even > 1){
            ans2 = 0;
        }
        else if(even == 1 && odd > 0){
            ans2 = 1;
        }
        else{
            ans2 = 2;
        }

        cout << min(ans, ans2) << endl;
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

// https://codeforces.com/contest/1883/problem/C