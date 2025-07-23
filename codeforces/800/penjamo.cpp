#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;

        vector<int> a(n);
        int sum = 0;
        for (auto &x : a) {
            cin >> x;
            sum += x;
        }

        int req = 0;
        for (int i = 0; i < n; i++) {
            req += (a[i] + 1) / 2;
        }

        if (req <= r) {
            cout << sum << "\n";
        } else {
            int diff = req - r;
            cout << sum - 2 * diff << "\n";
        }
    }
    return 0;
}

