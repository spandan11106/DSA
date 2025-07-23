#include <bits/stdc++.h>
using namespace std;

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;
    
    string combined = guest + host;
    
    if (combined.size() != pile.size()) {
        cout << "NO\n";
        return 0;
    }
   
    sort(combined.begin(), combined.end());
    sort(pile.begin(), pile.end());
    
    cout << (combined == pile ? "YES" : "NO") << endl;
    
    return 0;
}

