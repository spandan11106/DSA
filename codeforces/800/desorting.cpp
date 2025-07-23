#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isUnsorted(const vector<long long>& arr) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        if (arr[i + 1] < arr[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        if (isUnsorted(arr)) {
            cout << 0 << endl;
            continue;
        }

        long long min_ops = -1;

        for (int i = 0; i < n - 1; ++i) {
            long long diff = arr[i + 1] - arr[i];
            long long ops = (diff / 2) + 1;
            if (min_ops == -1 || ops < min_ops) {
                min_ops = ops;
            }
        }
        cout << min_ops << endl;
    }
    return 0;
}
