#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   vector<double> a(n);
   double sum = 0;
   for(auto &x : a){
      cin >> x;
      sum += x;
   }
   
   double out = sum/n;
   cout << fixed << setprecision(10) << out << "\n";
   return 0;
}
