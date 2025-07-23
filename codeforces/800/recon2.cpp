#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int diff = INT_MAX, one = -1, two = -1;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        int curr = abs(a[i] - a[j]);
        if (curr < diff) {
            diff = curr;
            one = i;
            two = j;
        }
    }
    cout << one + 1 << " " << two + 1 << endl;
    return 0;
}

