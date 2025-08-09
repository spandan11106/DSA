#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    string z = "";
    for (size_t i = 0; i < x.size(); ++i) {
        if (y[i] > x[i]) {
            cout << -1 << endl;
            return 0;
        }
        z += y[i];
    }

    cout << z << endl;
    return 0;
}


// https://codeforces.com/problemset/problem/801/B