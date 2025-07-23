#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      vector<int> a(n);
      int neg = 0;
      int pos = 0;
      int zero = 0;
      for(int i = 0; i<n; i++){
         cin >> a[i];
         if(a[i] < 0){
           neg++;
         }
         else if(a[i]>0) pos++;
         else zero++;
      }
      
      if(zero || neg%2){
         cout << 0 << endl;
      }
      else{
         cout << 1 << endl;
         cout << 1 << " " << 0 << endl;
      }
      
   }
   return 0;
}
