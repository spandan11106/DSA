#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   
   vector<bool> is_prime(n + 1, true);
   is_prime[0] = is_prime[1] = false;
   for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
           }
       }
   }

   vector<int> primes;
   for (int i = 2; i <= n; ++i) {
       if (is_prime[i]) {
            primes.push_back(i);
       }
   }
   
   int count = 0;
   for(int i = 0; i<primes.size(); i++){
      for(int j = i+1; j<primes.size(); j++){
         if(primes[i]*primes[j] <= n){
             count++;
         }
      }
   }
   cout << count << endl;
   
   return 0;
}
