#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    bool condition = true;
    for (int i = 1; i < n; i++) {
        if (!isupper(s[i])) {
            condition = false;
            break;
        }
    }

    if (condition) {
        for (int i = 0; i < n; i++) {
            if (islower(s[i]))
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}

