#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<char>> code(3, vector<char>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> code[i][j];
        }
    }

    bool symmetric = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (code[i][j] != code[2-i][2-j]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}

