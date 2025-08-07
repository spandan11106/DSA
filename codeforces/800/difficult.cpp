#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    string s1 = "FFT";
    string s2 = "NTT";

    if(s.find(s1) != string::npos || s.find(s2) != string::npos){
        sort(s.rbegin(), s.rend());
        cout << s << endl;
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

// https://codeforces.com/problemset/problem/2125/A