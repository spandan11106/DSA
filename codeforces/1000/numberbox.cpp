#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    int neg = 0;
    int sum = 0;
    int small = INT_MAX;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> mat[i][j];
            sum += abs(mat[i][j]);
            small = min(small, abs(mat[i][j]));
            if(mat[i][j] <= 0){
                neg++;
            }
        }
    }

    if(neg % 2 == 0){
        cout << abs(sum) << endl;
    }
    else{
        sum -= 2*small;
        cout << abs(sum) << endl;
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

// https://codeforces.com/problemset/problem/1447/B