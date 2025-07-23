#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int high = INT_MIN;
    int low = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        high = max(high, a[i]);
        low = min(low, a[i]);
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != high && a[i] != low){
            count++;
        }
    }

    cout << count << endl;
}

int main(){
    solve();
    return 0;
}