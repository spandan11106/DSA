#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   bool one = false;
   vector<int> a(n);
   for(auto &x : a){
      cin >> x;
      if(x == 1){
         one = true;
      }
   }
   
   if(one){
      cout << "HARD\n";
   }
   else{
      cout << "EASY\n";
   }
   
   return 0;
}
