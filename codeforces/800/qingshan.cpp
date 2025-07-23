#include <bits/stdc++.h>
using namespace std;

bool is_good(const string& str) {
    for (int i = 0; i + 1 < str.size(); ++i) {
        if (str[i] == str[i+1])
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;

        if (is_good(s)) {
            cout << "YES\n";
            continue;
        }

        if (!is_good(t)) {
            cout << "NO\n";
            continue;
        }

        if (t[0] == '1' && t[m-1] == '1') {
            bool has_11 = false;
            for (int i = 0; i + 1 < n; ++i) {
                if (s[i] == '1' && s[i+1] == '1') {
                    has_11 = true;
                    break;
                }
            }
            if (!has_11) {
                cout << "YES\n";
                continue;
            }
        }
        if (t[0] == '0' && t[m-1] == '0') {
            bool has_00 = false;
            for (int i = 0; i + 1 < n; ++i) {
                if (s[i] == '0' && s[i+1] == '0') {
                    has_00 = true;
                    break;
                }
            }
            if (!has_00) {
                cout << "YES\n";
                continue;
            }
        }
      
        cout << "NO\n";
    }
    return 0;
}

