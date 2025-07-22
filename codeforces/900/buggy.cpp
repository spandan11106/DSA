#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin >> n;

   if(n <= 2){
    cout << -1 << endl;
    return;
   }
   else{
    for(int i = n; i>0; i--){
        cout << i << " ";
    }
    cout << endl;
   }

   return;
}

int main(){
       solve();
    return 0;
}