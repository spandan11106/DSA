#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a.push_back({b, i + 1});
    }

    sort(a.begin(), a.end(), greater<pair<int, int>>());

    vector<int> ans(n + 1, 0); 

    int pos_left = 0, pos_right = 0;
    vector<int> positions = {0}; 

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            pos_right++;
            ans[a[i].second] = pos_right;
        } else {
            pos_left--;
            ans[a[i].second] = pos_left;
        }
    }

    long long time = 0;
    for (int i = 0; i <n; ++i) {
        int visits = a[i].first;
        int build_num = a[i].second;
        time += 1LL * abs(ans[build_num]) * 2 * visits;
    }

    cout << time << endl;

    cout << "0";
    for (int i = 1; i <= n; ++i) {
        cout << " " << ans[i];
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


// https://codeforces.com/problemset/problem/1614/B