#include <bits/stdc++.h>
using namespace std;

bool prime(long long n){

    if(n == 1) return false;

    for(long long i = 2; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

void solve(){
    long long n;
    cin >> n;
    
    if(prime(n)){
        cout << 1 << " " << n-1 << endl;
        return;
    }
    
    for(long long i = 2; i*i <= n; i++){
        if(n%i == 0){
            cout << n/i << " " << n/i*(i - 1) << endl;
            return;
        }
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

// https://codeforces.com/problemset/problem/1765/M