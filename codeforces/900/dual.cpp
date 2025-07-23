#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int one = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') one++;
        }

        if (one == 2) {
            bool adjacent = false;
            for (int i = 0; i < n - 1; i++) {
                if (s[i] == '1' && s[i + 1] == '1') {
                    adjacent = true;
                    break;
                }
            }
            if (adjacent) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
            continue;
        }

        if (one % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

