#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    
    if(k<=(n+1)/2){
       cout << 2*k-1 << "\n";
    }
    else{
       if(n%2 != 0){
          cout << 2*k-n-1 << "\n";
       }
       else{
          cout << 2*k-n << "\n";
       } 
    }
}
