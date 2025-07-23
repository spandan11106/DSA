#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] != '?' && s[i] != ' ') {
            char ch = tolower(s[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

