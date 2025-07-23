#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    if(n%2 == 1){
        for(int i = 0; i<n; i++){
            cout << 1 << " ";
        }
        cout << endl;
    }
    else{
        cout << "1 3 ";
        for(int i = 2; i<n; i++){
            cout << "2 ";
        }
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}