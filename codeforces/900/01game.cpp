#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '1') one++;
        else zero++;
    }
    int cal = min(one, zero);

    if(cal % 2 == 0){
        cout << "NET" << endl;
        return;
    }

    else{
        cout << "DA" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}