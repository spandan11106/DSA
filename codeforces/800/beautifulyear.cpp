#include <bits/stdc++.h>
using namespace std;

bool distinct(int n){
   int a, b, c, d;
   a = n % 10;
   n = n/10;
   b = n % 10;
   n = n/10;
   c = n % 10;
   n = n/10;
   d = n%10;
   if(a != b && b != c && c != d && a != c && a != d && b != d){
      return true;
   }
   return false;
}

int main(){
   int n;
   cin >> n;
   int temp = n+1;
   while(!distinct(temp)){
     temp += 1;
   }
   cout << temp << "\n";
   return 0;
}
