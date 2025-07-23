#include <bits/stdc++.h>
using namespace std;

int main(){
   int t; cin >> t;
   while(t--){
      int x, y, k;
      cin >> x >> y >> k;
      for(int i = 0; i<k-k%2; i++){
         cout << x - (i & 1?1:-1)*(i/2+1) << " " << y << endl;
      }
      if(k & 1){
         cout << x << " " << y << endl;
      }
   }
   return 0;
}
