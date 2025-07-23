#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string s;
        getline(cin, s);

        if (s.empty()) {
            cout << "\n";
            continue;
        }

        string abbrev;
        abbrev += s[0];

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                abbrev += s[i+1];
            }
        }

        cout << abbrev << "\n";
    }
    return 0;
}
