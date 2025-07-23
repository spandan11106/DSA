#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      string s;
      cin >> s;
      
      int one = 0;
      for(int i = 0; i<s.length(); i++){
         if(s[i] == '1'){
            one++;
         }
      }
      
      cout << one << "\n";
   }
   return 0;
}
