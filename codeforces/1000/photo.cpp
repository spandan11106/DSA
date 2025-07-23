#include <bits/stdc++.h>
using namespace std;

int main(){

   int n, x;
   cin >> n >> x;
   vector<int> start(n), end(n);
   for(int i = 0; i<n; i++){
      cin >> start[i] >> end[i];
      if(end[i]<start[i]){
         swap(start[i],end[i]);
      }
   }
   
   int left = 0;
   int right = INT_MAX;
   for(int i = 0; i<n; i++){
      left = max(left , start[i]);
      right = min(right , end[i]);
   }
   
   if(right - left < 0){
      cout << -1 << endl;
   }
   else{
      int mini = INT_MAX;
      for(int i = left; i<=right; i++){
         mini = min(mini , abs(x-i));
      }
      cout << mini << endl;
   }
   
   return 0;
}
