#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    int small = 100, big = 0;
    int max_pos = 0, min_pos = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > big) {
            big = a[i];
            max_pos = i;
        }
        if (a[i] <= small) {
            small = a[i];
            min_pos = i;
        }
    }

    int c = max_pos + 1;
    int b = min_pos + 1;
    int res = abs(1 - c) + abs(n - b);

    if (max_pos > min_pos) res--; 

    cout << res << "\n";
    return 0;
}

