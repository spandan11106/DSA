#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> magnets(n);
    for (int i = 0; i < n; ++i) {
        cin >> magnets[i];
    }
    int groups = 1;
    for (int i = 1; i < n; ++i) {
        if (magnets[i-1][1] == magnets[i][0]) {
            groups++;
        }
    }
    cout << groups << endl;
    return 0;
}

 
