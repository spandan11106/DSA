#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int one = 0, two = 0, three = 0;

    for (char c : s) {
        if (c == '1') one++;
        else if (c == '2') two++;
        else if (c == '3') three++;
    }

    string out = "";

    for (int i = 0; i < one; i++) {
        out += "1+";
    }
   
    for (int i = 0; i < two; i++) {
        out += "2+";
    }
    
    for (int i = 0; i < three; i++) {
        out += "3+";
    }

  
    if (!out.empty()) {
        out.pop_back();
    }

    cout << out << endl;
    return 0;
}

