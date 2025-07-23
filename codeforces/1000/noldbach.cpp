#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (k == 0) {
        cout << "YES" << endl;
        return 0;
    }

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

    unordered_set<int> valid_primes;
    for (int i = 0; i < static_cast<int>(primes.size()) - 1; ++i) {
        int q = primes[i];
        int r = primes[i + 1];
        int s = q + r + 1;

        if (s > n) {
            continue;
        }

        if (is_prime[s]) {
            valid_primes.insert(s);
        }
    }

    if (valid_primes.size() >= k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

