#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
   string t;
   cin >> s >> t;
   
   bool ok = true;
   if(s.length() != t.length()){
     cout << "NO\n";
     return 0;
   }
   
   for(int i = 0; i<s.length(); i++){
     if(s[i] != t[s.length() - i -1]){
       ok = false;
     }
   }
   
   if(ok){
     cout << "YES\n";
   }
   else{
     cout << "NO\n";
   }
}
