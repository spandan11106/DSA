#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        set<int> st;
        st.insert(a);
        st.insert(b);
        st.insert(c);

        
        auto it = st.begin();
        ++it; 
        cout << *it << "\n";
    }
    return 0;
}
