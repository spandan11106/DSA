#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    for(int i = 1; i<61; i++){
        long long num = (1ll << i);
        set<long long> st;
        for(int i = 0; i<n; i++){
            st.insert(a[i]%num);
        }
        if(st.size() == 2){
            cout << num << endl;
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

// https://codeforces.com/problemset/problem/1909/B