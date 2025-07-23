#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        multiset<int> b;  
        
        for(auto &x : a) {
            cin >> x;
            b.insert(x);
        }
        
        int poly = 0;
        auto it = b.begin();
        
        while(it != b.end()) {
            int current = *it;
            int count = b.count(current);
            
            poly += count/3;
            
            it = b.upper_bound(current);
        }
        
        cout << poly << "\n";
    }
    return 0;
}
