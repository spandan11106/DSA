#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> prime = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    auto it = find(prime.begin(), prime.end(), n);

    if (it != prime.end() && (it + 1) != prime.end() && *(it + 1) == m) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}

