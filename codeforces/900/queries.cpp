#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        vector<long long> prefix(n + 1, 0);
        long long sum = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
            prefix[i + 1] = prefix[i] + a[i];
        }
        
        while (q--) {
            int l, r, k;
            cin >> l >> r;
            l--; r--; 
            cin >> k;
            
            long long segment_length = r - l + 1;
            long long old_segment_sum = prefix[r + 1] - prefix[l];
            long long new_sum = sum - old_segment_sum + segment_length * k;
            
            cout << (new_sum % 2 != 0 ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}
