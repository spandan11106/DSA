#include <iostream>
#include <string>
using namespace std;

int main() {
    int count = 0;
    long long ans = 0;
    string line;

    while (getline(cin, line)) {
        if (line.empty()) {
            cout << ans << endl;
            return 0;
        }

        if (line[0] == '+') {
            count++;
        } else if (line[0] == '-') {
            count--;
        } else {
            int col = line.find(':');
            int total = line.size();
            ans += (total - col - 1) * count;
        }
    }

    cout << ans << endl;
    return 0;
}

