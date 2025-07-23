#include <bits/stdc++.h>
using namespace std;

int main(){

   int n, m;
   cin >> n >> m;
   vector<vector<char>> a(n , vector<char>(m));
   int min_x = n;
   int min_y = m;
   int max_x = 0;
   int max_y = 0;
   for(int i = 0; i<n; i++){
      for(int j = 0; j<m; j++){
         cin >> a[i][j];
         if(a[i][j] == '*'){
            min_x = min(min_x , i);
            min_y = min(min_y , j);
            max_x = max(max_x , i);
            max_y = max(max_y , j);
         }
      }
   }
   
   for(int i = min_x; i<max_x+1; i++){
      for(int j = min_y; j<max_y+1; j++){
         cout << a[i][j];
      }
      cout << endl;
   }
   
   return 0;
}
