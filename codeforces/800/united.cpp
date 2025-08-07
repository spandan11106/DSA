// https://codeforces.com/problemset/problem/1859/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    if(a[0] == a[n-1]){
        cout << -1 << endl;
        return;
    }
    else{
        int b = 0;
        while(a[b] == a[0]) b++;
        cout << b << " " << n - b << endl;
        for(int i = 0; i<b; i++) cout << a[i] << " ";
        cout << endl;
        for(int i = b; i<n; i++) cout << a[i] << " ";
        cout << endl;
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