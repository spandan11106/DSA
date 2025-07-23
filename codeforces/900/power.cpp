#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;
    vector<int> l(n), r(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i] >> r[i];
    }

    int total = 0;

    for (int i = 0; i < n; ++i) {
        total += (r[i] - l[i]) * P1;
    }

    for (int i = 1; i < n; ++i) {
        int gap = l[i] - r[i-1];
        if (gap <= T1) {
            total += gap * P1;
        } else if (gap <= T1 + T2) {
            total += T1 * P1 + (gap - T1) * P2;
        } else {
            total += T1 * P1 + T2 * P2 + (gap - T1 - T2) * P3;
        }
    }

    cout << total << endl;
    return 0;
}

