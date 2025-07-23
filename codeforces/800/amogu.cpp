#include <bits/stdc++.h>
using namespace std;

void transform(string s){

  int n = s.length();  
  
  if(s[n-1] == 's' && s[n-2] == 'u'){
    s.pop_back();
    s.pop_back();
    s = s + "i";
    cout << s << "\n";
  }
  else{
    s.pop_back();
    s = s + "us";
    cout << s << "\n";
  }
  
}

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    transform(s);
  }
  return 0;
}
