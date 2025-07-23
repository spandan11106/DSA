#include <bits/stdc++.h>
using namespace std;

int a[55], b[55];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> sa, sb;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sa.insert(a[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            sb.insert(b[i]);
        }

        if (sa.size() + sb.size() < 4) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}

