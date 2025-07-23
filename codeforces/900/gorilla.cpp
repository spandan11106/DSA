#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n, m, k;
      cin >> n >> m >> k; 
      vector<int> a(n);
      for(int i = 0; i<n; i++){
         a[i] = n - i;
      }
      reverse(a.end()-m, a.end());
      for(int i = 0; i<n; i++){
         cout << a[i] << " ";
      }
      cout << endl;
   }
   return 0;
}
