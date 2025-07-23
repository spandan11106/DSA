#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      string s;
      cin >> s;
      string t = "codeforces";
      int count = 0;
      
      for(int i = 0; i<10; i++){
         if(s[i] != t[i]){
            count++;
         }
      }
      
      cout << count << "\n";
   }
   return 0;
}
