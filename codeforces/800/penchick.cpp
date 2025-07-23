#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<int> arr(n);

    for(auto &x : arr) cin >> x;

    int ans = 0, cnt = 1;

    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1]) cnt++;
        else{
            ans = max(ans, cnt);
            cnt = 1;
        }
    }

    ans = max(ans, cnt);

    cout << n - ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
