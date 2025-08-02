#include <bits/stdc++.h>
using namespace std;

bool allDigitsDivide(long long n) {
    long long temp = n;
    while(temp) {
        int x = temp%10;
        if(x != 0 && n%x != 0){
            return false;
        }
        temp /= 10;
    }
    return true;
}

void solve() {
    long long n;
    cin >> n;
    const long long LCM = 2520;

    long long nearest = ((n + LCM - 1) / LCM) * LCM;

    while(true && n <= nearest) {
        if(allDigitsDivide(n)) {
            cout << n << "\n";
            break;
        }
        n ++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}


// https://codeforces.com/problemset/problem/1411/B