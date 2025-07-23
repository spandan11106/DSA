#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = "";
    for (int i = 0; i < s.size(); ) {
        if (s[i] == '.') {
            t += '0';
            i += 1;
        } else if (s[i] == '-' && i + 1 < s.size() && s[i+1] == '.') {
            t += '1';
            i += 2;
        } else if (s[i] == '-' && i + 1 < s.size() && s[i+1] == '-') {
            t += '2';
            i += 2;
        }
    }
    cout << t << endl;
    return 0;
}

