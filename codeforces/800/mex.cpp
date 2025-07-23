#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n, k, x;
      cin >> n >> k >> x;
      
      if(min(n , x+1) < k){
         cout << "-1\n";
      }
      else if(k < x){
         cout << (n-k)*x + k*(k-1)/2   << "\n";
      }
      else{
         cout << (n-k)*(k-1) + k*(k-1)/2 << "\n";
      }
   }
   return 0;
}
