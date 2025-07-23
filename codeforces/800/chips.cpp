#include <bits/stdc++.h>
using namespace std;

int main(){
   int n, m;
   cin >> n >> m;
   int left = 0;
   int given = 0;
   
   while(m > 0){
      for(int i = 1; i<=n; i++){
         m -= i;
         if(m<0){
            cout << m+i << endl;
            return 0;
         }
         else if(m == 0){
            cout << 0 << endl;
            return 0;
         }
      }
   }
   return 0;
}
