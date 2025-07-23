#include <bits/stdc++.h>
using namespace std;

int main(){
   int n; 
   cin >> n;
   int det = 1 + 4*(2*n);
   int root = sqrt(det);
   if(root*root == det){
       cout << "YES\n";
   }
   else{
       cout << "NO\n";
   }
}
