#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long max_size = 1;
        for (long long l = 1; l <= n; ++l) {
            if (n % l != 0) {
                break;
            }
            long long r = l;
            while (r + 1 <= n && n % (r + 1) == 0) {
                ++r;
            }
            max_size = max(max_size, r - l + 1);
            l = r;  // Skip ahead to avoid redundant checks
        }
        cout << max_size << endl;
    }
    return 0;
}
