#include <bits/stdc++.h>
using namespace std;

int main(){
   int a, b, n;
   cin >> a >> b >> n;
   int k = 0;
   while(n >= 0){
      ++k;
      n -= gcd((k&1) ? a : b, n);
   }
   if(k&1) cout << 1 << endl;
   else cout << 0 << endl;
   
   return 0;
}
