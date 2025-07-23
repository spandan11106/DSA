#include <bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin >> n;
   vector<int> a(n-1);
   for(int i = 0; i<n-1; i++){
      cin >> a[i];
   }
   int s, e;
   cin >> s >> e;
   
   int sum = 0;
   for(int i = s-1; i<e-1; i++){
      sum += a[i];
   }
   
   cout << sum << endl;
   return 0;
}
