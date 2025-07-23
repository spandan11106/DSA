#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   vector<int> a(n);
   for(auto &x : a) cin >> x;
   
   int ans = 0;
   int cur = 1;
   for(int i = 0; i<n-1; i++){
      if(a[i] <= a[i+1]) cur++;
      else{
         ans = max(ans,cur);
         cur = 1;
      }
   }
   ans = max(ans, cur);
   cout << ans << endl;
   return 0;
}
