#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a){
      cin >> x;
    }
    
    int maxx = a[0];
    int minn = a[0];
    int max_pos = n;
    int min_pos = n;
    
    for(int i = 0; i<n; i++){
      maxx = max(maxx, a[i]);
      minn = min(minn, a[i]);
      if(maxx == a[i]){
        max_pos = min(min_pos, i);
      }
      if(minn == a[i]){
        min_pos = min(min_pos, i);
      }
    }
       
    int score = (maxx - minn)*(n-1);
    cout << score << "\n";  
  }
  return 0;
}
