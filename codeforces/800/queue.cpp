#include <bits/stdc++.h>
using namespace std;

int main(){
   int n, t;
   cin >> n >> t;
   string s;
   cin >> s;
   while(t > 0){
      for(int i = 0; i<n-1; i++){
         if(s[i] == 'B' && s[i+1] == 'G'){
            swap(s[i], s[i+1]);
            i++;
         }
      }
      t--;
   }
   
   for(int i = 0; i<n; i++){
      cout << s[i];
   }
   cout << endl;
   
   return 0;
}
