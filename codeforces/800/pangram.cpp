#include <bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin >> n;
   string s;
   cin >> s;
   unordered_map<char , int> mpp;
   
   for(int i = 0; i<n; i++){
      char c = s[i];
      c = tolower(c);
      mpp[c]++;
   }
   
   if(mpp.size() == 26) cout << "YES\n";
   else cout << "NO\n";
   
   return 0;
}
