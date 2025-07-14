#include <bits/stdc++.h>

using namespace std;

long long N;

int main(){
    cin >> N;

    while(N > 1){
        cout << N << " ";
        if(N&1) N = 3*N+1;
        else    N >>= 1;
    }
    cout << 1 << endl;
}
// Instead of using n = n/2 or n%2 == 1 we use bitwise operations because then they take place faster avoiding TLE.