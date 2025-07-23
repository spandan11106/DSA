#include <bits/stdc++.h>
using namespace std;

int main(){
   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      if(n%2 == 1){
         cout << "NO\n";
      }
      else{
         string s;
         for(int i = 0; i<n/2; i++){
            char t = 'A' + i%26;
            s += t;
            s += t;
         }
         cout << "YES\n";
         for(int i = 0; i<n; i++){
            cout << s[i];
         }
         cout << endl;
      }
   }
   return 0;
}
