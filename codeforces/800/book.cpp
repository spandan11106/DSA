#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      vector<int> a(n); 
      for(auto &x : a){
         cin >> x;
      }
      
      int ma = 0;
      for(int i = 0; i<n-1; i++){
         ma = max(ma, a[i]);
      }        
      cout << ma+a[n-1] << "\n";
   }
   return 0;
}
