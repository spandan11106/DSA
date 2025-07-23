#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      string a = "1";
      string b(n-1, '0');
      string s = a+b;
      for(int i = 0; i<n; i++){
         cout << s[i];
      }
      cout << endl;
   }
   return 0;
}
