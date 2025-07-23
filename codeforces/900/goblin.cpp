#include <bits/stdc++.h>
using namespace std;

int fac(int n){
   int ans = 1;
   for(int i = 1; i<=n; i++){
      ans *= i;
   }
   return ans;
}

int pnc(int n, int r){
   return fac(n)/(fac(n-r)*fac(r));
}

int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      string s;
      cin >> s;
      
      long long dash = 0;
      long long und = 0;
      for(int i = 0; i<n; i++){
         if(s[i] == '-') dash++;
         else und++;
      }
     
      cout << (dash/2)*(dash - dash/2)*und << endl;
      
   }
   return 0;
}
