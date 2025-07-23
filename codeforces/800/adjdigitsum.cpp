#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        if (y > x + 1) {
            cout << "NO\n";
            continue;
        }

        int temp = x - y + 1;
        if (temp % 9 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

