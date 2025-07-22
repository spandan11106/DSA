#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> height(m, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char ch; cin >> ch;
            if (ch == '*') height[j]++;
        }
    }

    int rise = 0;
    int fall = 0;
    for (int i = 0; i < m - 1; i++) {
        rise = max(rise, height[i + 1] - height[i]);
        fall = min(fall, height[i + 1] - height[i]);
    }

    cout << rise << " " << -fall << endl;
}

int main() {
       solve();
    return 0;
}
