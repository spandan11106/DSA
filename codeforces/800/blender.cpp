#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        
        int div = min(x, y);
        int sec = ceil((double)n / div);
        
        cout << sec << "\n";
    }
    return 0;
}

