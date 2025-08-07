#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> b(n);
    set<long long> st;
    for(int i = 0; i<n; i++){
        cin >> b[i];
        st.insert(b[i]);
    }

    if(st.size() < n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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

// https://codeforces.com/problemset/problem/1438/B