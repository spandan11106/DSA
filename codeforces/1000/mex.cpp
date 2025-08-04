
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    int length = a;
    int ops = 0;
    
    if(a%4 == 1) ops = a-1;
    else if(a%4 == 2) ops = 1;
    else if(a%4 == 3) ops = a;
    else ops = 0;


    if(ops == b){
        cout << length << endl;
    }
    else{
        int req = ops^b;
        if(req != a){
            cout << length + 1 << endl;
        }
        else{
            cout << length + 2 << endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
// https://codeforces.com/problemset/problem/1567/B