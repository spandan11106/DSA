#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            cout << "YES" << endl;
            for (int i = 0; i < n; ++i) {
                if (i % 2 == 0)
                    cout << "1 ";
                else
                    cout << "-1 ";
            }
            cout << endl;
 
        } else if (n == 3) { 
            cout << "NO" << endl;

        } else { 
            cout << "YES" << endl;
            int k = n / 2;
            int a = 1, b = k; 
            for (int i = 0; i < n; ++i) {
                if (i % 2 == 0)
                    cout <<  b - 1 << " ";
                else
                    cout << -b << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
