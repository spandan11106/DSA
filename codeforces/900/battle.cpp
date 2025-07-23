#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
   
      int n;
      cin >> n;
      vector<long long> a(n);
      long long ans = 0;
      for(auto &x : a){
        cin >> x;
        ans += x;
      }
      
      cout << ans - 2*a[n-2] << endl;
      
   }
   return 0;
}
