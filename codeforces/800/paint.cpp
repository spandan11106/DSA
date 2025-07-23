#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> st;
        for (auto &x : a) {
            cin >> x;
            st.insert(x);
        }

        if (st.size() > 2) {
            cout << "NO\n";
        } else if (st.size() == 2) {
            auto it = st.begin();
            int x = *it;
            int y = *(++it);
            int count_x = 0;
            int count_y = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == x) {
                    count_x++;
                } else if (a[i] == y) {
                    count_y++;
                }
            }
            if (abs(count_x - count_y) <= 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
