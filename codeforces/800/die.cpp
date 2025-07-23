#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int Y, W;
    cin >> Y >> W;
    int need = max(Y, W);
    int favorable = 7 - need;
    int total = 6;
    int g = gcd(favorable, total);
    cout << favorable / g << "/" << total / g << endl;
    return 0;
}

