#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (auto &x : a) {
        cin >> x;
        sum += x;
    }
    
    sort(a.begin(), a.end(), greater<int>());
    
    int num = 0;
    int taken = 0;
    for (int i = 0; i < n; ++i) {
        if (taken > sum / 2) {
            break;
        }
        taken += a[i];
        num++;
    }
    
    cout << num << "\n";
    return 0;
}
