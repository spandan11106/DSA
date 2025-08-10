#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    long long last = 0;
    for(int i = 1; i<=n-3; i++){
        cout << i << " ";
        last ^= i;
    }

    long long third_last = ((long long)1 << 29);
    long long second_last = ((long long)1 << 30);
    
    last ^= third_last;
    last ^= second_last;

    cout << third_last << " " << second_last << " " << last << endl;

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

// https://codeforces.com/contest/1722/problem/G