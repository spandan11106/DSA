#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      vector<int> a(n);
      for(auto &x : a){
         cin >> x;
      }
      
      sort(a.begin() , a.end(), greater<int>());
      int sum = 0;
      for(int i = 1; i<n; i++){
         sum += a[i] - a[i-1];
      }
      
      cout << abs(sum) << "\n";
   }
   return 0;
}
