#include <bits/stdc++.h>
using namespace std;

int main(){
  int x = 0;
  int t;
  cin >> t;
  while(t--){
  
    string s;
    cin >> s;
    
    if(s == "++X" || s == "X++"){
      x++;
    }
    
    if(s == "X--" || s == "--X"){
      x--;
    }
    
  }
  cout << x << "\n";
  return 0;
}
