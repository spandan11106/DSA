#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      vector<char> a = {'a', 'e', 'i', 'o', 'u'};
      string ans = "";
      for(int i = 0; i<n; i++){
         ans += a[i%5];
      }
      sort(ans.begin(), ans.end());
      cout << ans << endl;
   }
   return 0;
}
