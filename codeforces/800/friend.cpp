#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;
        for (int i = 0; i < n; i++) {
            if (a[i] >= 1 && a[i] <= n) {
                if (a[a[i] - 1] == i+1) {
                    found = true;
                }
            }
        }
        if(found) cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}

