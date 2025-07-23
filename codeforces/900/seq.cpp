#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, d;
   cin >> n >> d;
   vector<int> a(n);
   for (auto &x : a) {
      cin >> x;
   }
   
   int ops = 0;
   for (int i = 1; i < n; i++) {
      if (a[i] <= a[i - 1]) {
         int diff = a[i - 1] - a[i];
         int k = diff / d + 1;
         ops += k;
         a[i] += k * d;
      }
   }
   
   cout << ops << "\n";
   return 0;
}
