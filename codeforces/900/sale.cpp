#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
    }

    sort(a.begin() , a.end());
    int sum = 0;
    for(int i = 0; i<m; i++){
        if(a[i] <= 0){
            sum += a[i];
        }
    }

    cout << -1*(sum) << "\n";
    return 0;
}
