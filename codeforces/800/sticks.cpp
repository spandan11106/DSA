#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
     int n;
     string s;
     cin >> n >> s;
     
     vector<int> a(n);
     int l = 1;
     int r = n;
     
     for(int  i = n-2; i>=0; i--){
        if(s[i] == '<'){
           a[i+1] = l;
           l++;
        }
        
        if(s[i] == '>'){
           a[i+1] = r;
           r--;
        }
     }
     a[0] = l;
     
     for(int n : a){
        cout << n << " ";
     }
     cout << "\n";
     a.clear();
     
  }
  return 0;
}
