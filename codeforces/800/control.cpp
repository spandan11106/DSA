#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n, k;
      cin >> n >> k;
      string s = "";
      for(int i = 0; i<k; i++){
         s += 'a'+i;
      }
      string ans;
      for(int i = 0; i<n; i++){
         ans += s;
      }
      for(int i = 0; i<ans.size(); i++){
         cout << ans[i];
      }
      cout << endl;
   }
   return 0;
}
