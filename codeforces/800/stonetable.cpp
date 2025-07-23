#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   string s;
   cin >> s;
   
   int continous = 0;
   int res = 0;
   
   for(int i = 0; i<s.length()-1; i++){
      if(s[i] == s[i+1]){
         continous++;
      }
      res += continous;
      continous = 0;
   }
   cout << res << "\n";
   return 0;
}
