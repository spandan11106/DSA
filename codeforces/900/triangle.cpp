#include <bits/stdc++.h>
using namespace std;

int main(){
   int a, b, c, d;
   cin >> a >> b >> c >> d;
   if( (a+b>c && a+c>b && b+c>a) || (a+b>d && a+d>b && b+d>a) || (b+d>c && b+c>d && d+c>b) || (a+c>d && a+d>c && c+d>a)){
      cout << "TRIANGLE\n";
   }
   
   else if( a+b==c || b+c==a || c+a==b || a+b==d || a+d==b || b+d==a || b+d==c || b+c==d || d+c==b || a+c==d || a+d==c || c+d == a ){
       cout << "SEGMENT\n";
   }
   
   else{
       cout << "IMPOSSIBLE\n";
   }
   
   return 0;
}
