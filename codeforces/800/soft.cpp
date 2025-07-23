#include <bits/stdc++.h>
using namespace std;

int main(){
   int n, k, l, c, d, p, nl, np;
   cin >> n >> k >> l >> c >> d >> p >> nl >> np;
   
   int lq = k*l/nl;
   int slice = c*d;
   int salt = p/np;
   
   int toast = min(min(lq, slice) , min(lq, salt));
   cout << toast/n << "\n";
   return 0;
}
