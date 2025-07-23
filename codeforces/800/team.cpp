#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int sol = 0;
  while(n--){
    int s[3];
    int one = 0;
    
    for(int i = 0; i<3; i++){
      cin >> s[i];
      if(s[i] == 1){
        one++;
      }
    }
    
    if(one >= 2){
      sol++;
    }
    
    one = 0;
  }
  cout << sol << "\n";
  return 0;
}
