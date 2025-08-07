#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    
    if(c % 2 == 0){
        if(a > b){
            cout << "First" << endl;
            return;
        }
        else{
            cout << "Second" << endl;
            return;
        }
    }
    else{
        if(b > a){
            cout << "Second" << endl;
        } 
        else{
            cout << "First" << endl;
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

// https://codeforces.com/problemset/problem/1858/A