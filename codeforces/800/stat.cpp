#include <bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin >> n;
   vector<int> a(n);
   map<int,int> mpp;
   for(auto &x : a){
      cin >> x;
      mpp[x]++;
   }
   
   for(auto it = mpp.begin(); it != mpp.end(); it++){
      it++;
      if(it == mpp.end()){
         cout << "NO\n";
         return 0;
      }
      cout << it->first << endl;
      return 0;
   }
   
   return 0;
}
