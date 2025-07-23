#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n, k;
      cin >> n >> k;
      long long product = 1;
      vector<int> a(n);
      for(auto &x : a){
         cin >> x;
         product *= x;
      }
      
      if(2023%product != 0){
         cout << "NO\n";
      }
      
      else{
         int left = 2023/product;
         cout << "YES\n";
         vector<int> a(k , 1);
         a[k-1] = left;
         for(auto &x : a){
            cout << x << " ";
         }  
         cout << "\n";
      }
      
   }
   return 0;
}
