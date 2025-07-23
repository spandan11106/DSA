#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int max_gap = a[0];                             // Initial gap from 0 to first station
        for (int i = 1; i < n; ++i) {
            max_gap = max(max_gap, a[i] - a[i-1]);
        }
        max_gap = max(max_gap, 2 * (x - a[n-1]));      // Gap from last station to x and back

        cout << max_gap << endl;
    }
    return 0;
}
