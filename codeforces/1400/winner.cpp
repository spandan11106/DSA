#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> res;

    for(int i = 1; i * i <= n; ++i) {
        res.insert(i);
        res.insert(n / i);
    }
    res.insert(0); 

    cout << res.size() << '\n';
    for (auto x : res) cout << x << ' ';
    cout << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}