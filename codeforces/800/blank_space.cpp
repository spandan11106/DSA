#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int max_count = 0;
        int current = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) {
                current++;
            } else {
                max_count = max(max_count, current);
                current = 0;
            }
        }
        
        max_count = max(max_count, current);
        cout << max_count << "\n";
    }
    return 0;
}
