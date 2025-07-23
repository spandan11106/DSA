#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      vector<int> a(n);
      for(int i = n; i>1; i--){
          a[i-2] = i;
      }
      a[n-1] = 1;
      for(int i = 0; i<n; i++){
         cout << a[i] << " ";
      }
      cout << endl;
   }
   return 0;
}
