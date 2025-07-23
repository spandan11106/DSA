#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int x = 0;
        int c = 1;
        while (x >= -n && x <= n) {
            if (c % 2 == 1) {
                x -= 2 * c - 1;
            } else {
                x += 2 * c - 1;
            }
            c++;
        }

        if (c % 2 == 1) {
            cout << "Kosuke\n";
        } else {
            cout << "Sakurako\n";
        }
    }
    return 0;
}


