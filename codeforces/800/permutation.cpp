#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n; cin >> n;
      if(n%2 == 0){
         cout << -1 << endl;
      }
      else{
         vector<int> p(n);
         iota(p.begin(), p.end(), 1);
         for(int i = 1; i<n; i+=2){
            swap(p[i],p[i+1]);
         }
         for(int i = 0; i<n; i++){
            cout << p[i] << " ";
         }
         cout << endl;
      }
   }
   return 0;
}
