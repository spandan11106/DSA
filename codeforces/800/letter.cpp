#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); 
    set<char> st;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '{' && s[i] != '}' && s[i] != ',' && s[i] != ' ') {
            st.insert(s[i]);
        }
    }

    cout << st.size() << "\n";
    return 0;
}

