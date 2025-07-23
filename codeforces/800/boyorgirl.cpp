#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  
  vector<bool> cod(26, false);
  
  int unique = 0;
  for(int i = 0; i<s.length(); i++){
     if(!cod[s[i] - 'a']){
       unique++;
       cod[s[i] - 'a'] = true;
     }
  }
  
  if(unique%2 == 0){
     cout << "CHAT WITH HER!\n";
  }
  else{
     cout << "IGNORE HIM!\n";
  }
  
  return 0;
}
