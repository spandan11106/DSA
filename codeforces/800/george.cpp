#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   pair<int , int> a[n];
   for(int i = 0; i<n; i++){
      cin >> a[i].first >> a[i].second;
   }
   
   int count = 0;
   for(int i = 0; i<n; i++){
      if(a[i].second - a[i].first > 1){
         count++;
      }
   }
   
   cout << count << "\n";
   return 0;
}
