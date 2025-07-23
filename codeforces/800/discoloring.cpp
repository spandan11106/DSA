#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n, m, k;
      cin >> n >> m >> k;
      
      int max_diff = max(n, m) -1;
      if(max_diff < k){
         cout << n*m << "\n";
      }
      
      else if((n>k && m<k) || (n<k && m>k)){
         int a = max(n, m);
         int b = min(n, m);
         cout << n*m - (a-k)*b << "\n";
      }
      
      else{ 
         cout << n*m - (n-k)*(m-k)*3 - (n-k)*(2*k - m) - (m-k)*(2*k -n) << "\n";
      }
   }
   return 0;
}
