#include <bits/stdc++.h>
using namespace std;

int main(){
   int n, h;
   cin >> n >> h;
   vector<int> a(n);
   for(auto &x : a){
      cin >> x;
   }
   
   int width = 0;
   for(int i = 0; i<n; i++){
      if(a[i] <= h){
         width++;
      }
      else{
         width += 2;
      }
   }
   
   cout << width << "\n";
   return 0;
}
