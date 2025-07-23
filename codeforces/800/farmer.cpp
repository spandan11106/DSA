#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n, k;
      cin >> n >> k;
      if(k == 1){
         vector<int> a(n);
         iota(a.begin(), a.end(), 1);
         for(int i = 0; i<n; i++){
            cout << a[i] << " ";
         }
         cout << endl;
      }
      else if(n==k){
         vector<int> a(n,1);
         for(int i = 0; i<n; i++){
            cout << a[i] << " ";
         }
         cout << endl;
      }
      else{
         cout << -1 << endl;
      }
   }
   return 0;
}
