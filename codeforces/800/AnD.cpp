#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a = 0, d = 0;
    for(char c : s) {
        if(c == 'A') a++;
        else if(c == 'D') d++;
    }

    if(a > d) cout << "Anton\n";
    else if(a < d) cout << "Danik\n";
    else cout << "Friendship\n";

    return 0;
}

