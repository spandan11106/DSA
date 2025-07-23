#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        
        int x = 0;
        int y = 0;
        int day = 0;
       
        for(int i = 0; i<r; i++){
          x++;
          day++;
          if(day == m){
            break;
          }
        }
        
        if(day != m){      
           for(int j = 0; j>l; j--){
             y--;
             day++;
             if(day == m){
               break;
             }
           } 
        }
        
        cout << y << " " << x << "\n";
    }
    return 0;
}

