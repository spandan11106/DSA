#include <iostream>
#include <string>
using namespace std;

string increment(string s) {
    int carry = 1;
    for (int i = s.size() - 1; i >= 0 && carry; --i) {
        int digit = (s[i] - '0') + carry;
        carry = digit / 10;
        s[i] = (digit % 10) + '0';
    }
    if (carry) {
        s = '1' + s;
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    size_t dot = s.find('.');
    string integer_part = s.substr(0, dot);
    string fractional_part = s.substr(dot + 1);

    if (integer_part.back() == '9') {
        cout << "GOTO Vasilisa." << endl;
    } else {
        if (fractional_part[0] >= '5') {
            integer_part = increment(integer_part);
        }
        cout << integer_part << endl;
    }

    return 0;
}

