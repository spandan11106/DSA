#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      vector<int> arr(n);
      
      for(int i = 1; i<=n; i++){
         cout << 2*i - 1 << " ";
      }
      cout << "\n";
   }
   return 0;
}
