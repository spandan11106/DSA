#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      string s;
      cin >> s;
      
      if(n < 4){
         cout << "NO\n";
         continue;
      }
      
      for(char &c : s){
         c = tolower(c);
      }
      
      s.erase(unique(s.begin(), s.end()), s.end());
      cout << (s == "meow" ? "YES" : "NO") << "\n";
   }
   return 0;
}
