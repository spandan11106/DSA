#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> v;

bool check(int x) {
    map<int,int> mp;
    mp[0]++;
    for(auto i : v) {
        int k = i - x;
        if(mp[k])
            return true;
        mp[i]++;
    }
    return false;
}

int main() {
    int n, l, x, y;
    cin >> n >> l >> x >> y;

    v.resize(n);
    for(auto &i : v) cin >> i;

    if(check(x) && check(y)) {
        cout << 0 << endl;
    } else if(check(x) ^ check(y)) {
        int ans = check(x) ? y : x;
        cout << 1 << endl;
        cout << ans << endl;
    } else {
        map<int,int> mpx, mpy;
        for(auto i : v) {
            mpx[x + i]++;
            mpx[i - x]++;
            mpy[y + i]++;
            mpy[i - y]++;
        }

        int flag = 0, ans = 0;
        for(auto i : mpx) {
            if(mpy[i.first] && i.first >= 0 && i.first <= l) {
                ans = i.first;
                flag = 1;
                break;
            }
        }

        if(flag) {
            cout << 1 << endl;
            cout << ans << endl;
        } else {
            cout << 2 << endl;
            cout << x << " " << y << endl;
        }
    }
    return 0;
}