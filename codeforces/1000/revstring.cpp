#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool found = false;
    int pos = 0;
    for(int i = 0; i<n-1; i++){
        if(s[i] > s[i+1]){
            found = true;
            pos = i;
            break;
        }
    }

    if(!found){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        cout << pos+1 << " " << pos+2 << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

// https://codeforces.com/problemset/problem/1155/A