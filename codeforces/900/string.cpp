#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        string rev = s;
        reverse(rev.begin(), rev.end());

        if (s < rev) {
            cout << "YES\n";
        } else {
            if (k == 0) {
                cout << "NO\n";
            } else {
                bool all_same = true;
                for (int i = 1; i < n; i++) {
                    if (s[i] != s[0]) {
                        all_same = false;
                        break;
                    }
                }
                if (all_same) {
                    cout << "NO\n";
                } else {
                    cout << "YES\n";
                }
            }
        }
    }
    return 0;
}

