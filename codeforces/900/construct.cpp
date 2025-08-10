#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b;
	cin >> n >> a >> b;
	for (int i = 0; i < n; ++i) {
		cout << char('a' + i % b);
	}
	cout << endl;	
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

// https://codeforces.com/problemset/problem/1335/B