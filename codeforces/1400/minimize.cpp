#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
	cin >> n;
	vector<int> a(n);
	for (int j = 0; j < n; ++j) {
		cin >> a[j];
		--a[j];
	}
		
    int pos = 0;
	while (pos < n) {
		int nxt = min_element(a.begin() + pos, a.end()) - a.begin();
		int el = a[nxt];
		a.erase(a.begin() + nxt);
		a.insert(a.begin() + pos, el);
		if (pos == nxt) pos = nxt + 1;
		else pos = nxt;
	}
		
    for (auto it : a) cout << it + 1 << " ";
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