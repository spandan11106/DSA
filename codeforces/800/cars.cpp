#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
   
      int n, k;
      cin >> n >> k;
      vector<int> a(n);
      unordered_map<int,int> mpp;
      for(auto &x : a){
        cin >> x;
        mpp[x]++;
      }
      
      bool found = false;
      for(auto it = mpp.begin(); it != mpp.end(); it++){
         if(it -> second >= k){
            found = true;
            break;
         }
      }
      
      if(found){
         cout << k-1 << endl;
      }
      else{
         cout << n << endl;
      }
   }
   return 0;
}
