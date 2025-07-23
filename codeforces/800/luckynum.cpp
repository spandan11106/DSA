#include <bits/stdc++.h>
using namespace std;

int main(){
   long long n;
   cin >> n;
   
   int four = 0;
   int seven = 0;
   
   while(n > 0){
     if(n%10 == 4){
       four++;
     }
     if(n%10 == 7){
       seven++;
     }
     n = n/10;
   }
   
   if(four + seven == 0){
     cout << "NO\n";
     return 0;
   }
   
   if((four+seven) == 4 || (four+seven) == 7){
     cout << "YES\n";
   }
   else{
     cout << "NO\n";
   }
   
   return 0;
}
