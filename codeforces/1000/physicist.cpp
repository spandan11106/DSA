#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   pair<pair<int , int> , int> a[n];
   int x = 0;
   int y = 0;
   int z = 0;
   for(int i = 0; i<n; i++){
      cin >> a[i].first.first >> a[i].first.second >> a[i].second;
      x += a[i].first.first;
      y += a[i].first.second;
      z += a[i].second;
   }
   
   if(x == 0 && y == 0 && z == 0){
      cout << "YES\n";
   }
   else{
      cout << "NO\n";
   }
   
   return 0;
}
