#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a, b;
    cin >> a >> b;
    long long count = 0;
    long long ans = 1e5;
    
    for(int i = b; i <= b+6; i++){
        long long temp = a;
        count = i - b;
        if(i == 1) continue;
        while(temp > 0){
            temp = temp/(i);
            count++;
        }
        ans = min(ans, count);
    }

    cout << ans << endl;
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

// https://codeforces.com/problemset/problem/1485/A