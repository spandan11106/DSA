#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int max_product = 0;
        
        for (int da = 0; da <= 5; ++da) {
            for (int db = 0; db <= 5 - da; ++db) {
                int dc = 5 - da - db;
                int new_a = a + da;
                int new_b = b + db;
                int new_c = c + dc;
                int product = new_a * new_b * new_c;
                if (product > max_product) {
                    max_product = product;
                }
            }
        }
        
        cout << max_product << "\n";
    }
    return 0;
}
