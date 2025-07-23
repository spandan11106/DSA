#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n, k;
      cin >> n >> k;
      vector<int> a(n, 0);
      int curr = 1;
      for(int i = 0; i<n; i++){
         if((i+1)%k == 0){
             a[i] = curr;
             curr++;  
         }
      }
      for(int i = 0; i<n; i++){
         if(a[i] == 0){
            a[i] = curr;
            curr++;
         }
      }
      
      for(int i = 0; i<n; i++){
         cout << a[i] << " ";
      }
      cout << endl;
   }
   return 0;
}
