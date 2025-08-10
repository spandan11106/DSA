#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n;) {
        if(s[i] == '1') {
            if(i+1 < n && s[i+1] == '4') {
                if(i+2 < n && s[i+2] == '4') {
                    i += 3;
                }
                else {
                    i += 2;
                }
            }
            else {
                i += 1;
            }
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    solve();
    return 0;
}

// https://codeforces.com/problemset/problem/320/A