#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int one = 0, zero = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == '1') one++;
        else zero++;
    }

        int i = 0;
        while(zero != 0 && one != 0){
            if(s[i] == '0'){
                one--;
            }
            if(s[i] == '1'){
                zero--;
            }
            i++;
        }
        
        while(one != 0){
            if(s[i] == '0'){
                one--;
            }
            else{
                break;
            }
            i++;
        }

        while(zero != 0){
            if(s[i] == '1'){
                zero--;
            }
            else break;
            i++;
        }

        cout << max(one, zero) << endl;
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

// https://codeforces.com/problemset/problem/1913/B