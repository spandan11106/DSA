#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   
   vector<int> a(n-1);
   a[0] = 2;
   for(int i = 1; i<n-1; i++){
      a[0] = 2;
      a[i] = a[i-1] + i+1;
      if(a[i] > n){
         a[i] -= n;
      } 
   }
   
   for(int j = 0; j<n-1; j++){
      cout << a[j] << " ";
   }
   cout << endl;
   
   return 0;
}
