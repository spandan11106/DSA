#include <bits/stdc++.h>
using namespace std;

int main(){

   int n, d;
   cin >> n >> d;
   vector<int> a(n);
   for(auto &x : a){
      cin >> x;
   }
   int count = 0;
   
   for(int i = 0; i<n; i++){
      for(int j = 0; j<n; j++){
         if(i != j && abs(a[i]-a[j]) <= d){
            count++;
         }
      }
   }
   
   cout << count << endl;
   
   return 0;
}
