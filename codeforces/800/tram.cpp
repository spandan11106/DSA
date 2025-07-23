#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   pair<int , int> a[n];
   for(int i = 0; i<n; i++){
      cin >> a[i].first >> a[i].second;
   }
   
   int max_no = 0;
   int x = 0;
   for(int i = 0; i<n; i++){
      x += a[i].second - a[i].first;
      max_no = max(max_no , x);
   }
   
   cout << max_no << "\n";
   return 0;
}
