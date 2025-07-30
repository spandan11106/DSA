#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b(n + 1);

    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i){
        cin >> b[i];
    }

    unordered_map<int,int> freq_a;
    unordered_map<int,int> freq_b;

    int p = 1;
    for (int i = 2; i <= n; ++i){
        if (a[i] != a[i - 1]){
            freq_a[a[i - 1]] = max(freq_a[a[i - 1]], i - p);
            p = i;
        }
    }
    freq_a[a[n]] = max(freq_a[a[n]], n - p + 1);

    p = 1;
    for (int i = 2; i <= n; ++i){
        if (b[i] != b[i - 1]){
            freq_b[b[i - 1]] = max(freq_b[b[i - 1]], i - p);
            p = i;
        }
    }
    freq_b[b[n]] = max(freq_b[b[n]], n - p + 1);

    int ans = 0;
    unordered_map<int,int> keys;
    for (auto &kv : freq_a) keys[kv.first] = 1;
    for (auto &kv : freq_b) keys[kv.first] = 1;

    for (auto &kv : keys) {
        int val = kv.first;
        int sum_len = freq_a[val] + freq_b[val];
        ans = max(ans, sum_len);
    }

    cout << ans << '\n';
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

// https://codeforces.com/problemset/problem/1831/B