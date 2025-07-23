#include <bits/stdc++.h>
using namespace std;

int sum_digits(int n, int b) {
    int sum = 0;
    while (n > 0) {
        sum += n % b;
        n /= b;
    }
    return sum;
}

int main() {
    int A;
    cin >> A;
    int total = 0;
    for (int base = 2; base < A; ++base) {
        total += sum_digits(A, base);
    }
    int denom = A - 2;
    int g = gcd(total, denom);
    cout << total / g << "/" << denom / g << endl;
    return 0;
}

