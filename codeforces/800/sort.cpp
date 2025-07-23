#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> powers = {1, 2, 4, 8, 16};
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool valid = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i+1]) {
                if (powers.find(i+1) == powers.end()) {
                    valid = false;
                    break;
                }
            }
        }
        cout << (valid ? "YES" : "NO") << '\n';
    }
    return 0;
}

