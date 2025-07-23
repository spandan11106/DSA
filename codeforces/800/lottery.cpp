#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   int bill = 0;
   bill += n/100;
   n = n%100;
   bill += n/20;
   n = n%20;
   bill += n/10;
   n = n%10;
   bill += n/5;
   n = n%5;
   bill += n;
   
   cout << bill << "\n";
   return 0;
}
