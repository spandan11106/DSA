#include <bits/stdc++.h>
using namespace std;

int main(){
   int t; cin>>t;
   while(t--){
      int n, k;
      cin >> n >> k;
      if(k == 4*n-2){
         cout << k/2+1 << endl;
      }
      else{
         int ans = ceil(float (k)/2);
         cout << ans << endl;
      }
   }
   return 0;
}
