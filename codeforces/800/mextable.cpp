#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n, m;
      cin >> n >> m;
      
      int res = max(n, m);
      cout << res+1 << "\n";
   } 
   return 0;
}
