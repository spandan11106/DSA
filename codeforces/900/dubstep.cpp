#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    string res = "";
    bool first = true;
    int i = 0;
    while (i < n) {
       if (i + 2 < n && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
           i += 3;
       } else {
           if (!first) {
               res += ' ';
           } else {
               first = false;
           }
           string word = "";
           while (i < n) {
              if (i + 2 < n && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
                  break;
              }
              word += s[i];
              i++;
              }
              res += word;
          }
        }
    cout << res << endl;
    return 0;
}

