#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, p;
    cin >> n >> p;

    vector<int> a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    
    vector<pair<int, int>> spreaders;
    for (int i = 0; i < n; i++)
        spreaders.push_back({b[i], a[i]});

    sort(spreaders.begin(), spreaders.end());

    int remaining = n - 1; 
    long long total_cost = p; 

    for (auto &[cost, quota] : spreaders) {
        if (remaining == 0) break;
        if(cost <= p){
            int take = min(remaining, quota);
            total_cost += 1LL * cost * take;
            remaining -= take;
        }
    }

    total_cost += 1LL * remaining * p;
    cout << total_cost << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

// https://codeforces.com/problemset/problem/1876/A