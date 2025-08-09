#include <bits/stdc++.h>
using namespace std;

bool palimcheck(string s){
    int n = s.size();
    for(int i = 0; i<n; i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}

void solve(){
    string s;
    cin >> s;

    if(palimcheck(s)){
        sort(s.begin(), s.end());
        if(palimcheck(s)){
            cout << -1 << endl;
        }
        else{
            cout << s << endl;
        }
    }
    else{
        cout << s << endl;
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

// https://codeforces.com/problemset/problem/1093/B