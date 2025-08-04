#include <bits/stdc++.h>
using namespace std;

void solve(){   
    int n, r, b;
    cin >> n >> r >> b;

    int longest = r/(b+1);
    int rem = r%(b+1);
    for(int i = 0; i<rem ;i++)    cout<<string(longest+1,'R')<<'B';
    for(int i=rem;i<b;i++)    cout<<string(longest,'R')<<'B';
    cout<<string(longest,'R');
    cout<<endl;
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

// https://codeforces.com/problemset/problem/1659/A