#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n, m;
      cin >> n >> m;

      vector<pair<int, int>> op(n);
      for(int i = 0; i < n; i++){
         cin >> op[i].first >> op[i].second;
      }

      int perimeter = n * m * 4;
      for(int i = 1; i<n; i++){
         perimeter -= 2*(2*m - op[i].first - op[i].second);
      }
      cout << perimeter << "\n";
   }
   return 0;
}

