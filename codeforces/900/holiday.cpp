#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   
   int maxi = 0;
   int mini = 0;
   
   if(n%7 == 0){
      maxi = (n/7)*2;
      mini = maxi;
      cout << mini << " " << maxi << "\n";
   }
   else{
      int rem = n%7;
      int maxi = (n/7)*2;
      mini = maxi;
      if(rem == 6){
         maxi += 2;
         mini += 1;
      }
      else if (rem == 1){
         maxi += 1;
      }
      else{
         maxi += 2;
      }
      
      cout << mini << " " << maxi << "\n";
   }
   
}
