#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<int> cnt(26, 0);
    string s = "";
    for(int i=0; i<n; i++) {
        for(int j=0; j<26; j++) {
            if(cnt[j] == a[i]) {
                cnt[j]++;
                s += (char)('a' + j);
                break;
            }
        }
    }
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

