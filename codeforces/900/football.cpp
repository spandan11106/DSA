#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int current = 0;
    int res = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            current++;
        } else {
            res = max(res, current + 1);
            current = 0;
        }
    }
    
    res = max(res, current + 1);
    if (res >= 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
